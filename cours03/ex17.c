#include <stdio.h>

int main() {
    char nom[30], prenom[30], ligne[60];
    int naissance;
    
    while (fgets(ligne, 30, stdin) &&
           sscanf(ligne, "%s %s %d", nom, prenom,
           &naissance) == 3) {
        printf("Nom               : %s\n", nom);
        printf("Prenom            : %s\n", prenom);
        printf("Date de naissance : %d\n", naissance);
    }
    return 0;
}

