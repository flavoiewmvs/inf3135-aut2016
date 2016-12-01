#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char **argv) {
    // Indique si les options a et b sont activees
    // Normalement, il devrait s'agit de booleen, mais pour des
    // raisons de compatibilite, ce sont des entiers
    int aflag = 0;
    int bflag = 0;
    // Pour recuperer l'argument de l'option c
    char *cvalue = NULL;
    int index;
    int c;

    // On traite les arguments
    opterr = 0;
    while ((c = getopt (argc, argv, "abc:")) != -1) {
        switch (c) {
            case 'a':
                aflag = 1;
                break;
            case 'b':
                bflag = 1;
                break;
            case 'c':
                cvalue = optarg;
                break;
            case '?':
                if (optopt == 'c')
                    fprintf(stderr, "Option -%c requires an argument.\n",
                            optopt);
                else if (isprint (optopt))
                    fprintf(stderr, "Unknown option `-%c'.\n", optopt);
                else
                    fprintf(stderr,
                            "Unknown option character `\\x%x'.\n",
                            optopt);
                return 1;
            default:
                abort();
        }
    }
    printf ("aflag = %d, bflag = %d, cvalue = %s\n",
            aflag, bflag, cvalue);

    // On verifie s'il reste des arguments
    for (index = optind; index < argc; index++)
        printf ("Non-option argument %s\n", argv[index]);
    return 0;
}
