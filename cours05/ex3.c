#include <stdio.h>
#include <string.h>

int main () {
    char s[] = "nom \t  prenom \t  naissance";
    char *pc;

    printf("Chaine a segmenter : %s\n", s);
    pc = strtok(s, " \t");
    while (pc != NULL) {
        printf("/%s/\n", pc);
        pc = strtok(NULL, " \t");
    }
    return 0;
}
