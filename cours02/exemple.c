#include <stdio.h>       /* directives au préprocesseur */
#define DEBUT -2
#define FIN 2
#define MSG "Programme de démonstration\n"

int carre(int x);        /* déclaration des fonctions */
int cube(int x);

int main() {             /* début du bloc principal */
    int i;               /* définition des variables locales */
    printf(MSG);
    for (i = DEBUT; i <= FIN; i++) {
        printf("%d carré: %d cube: %d\n", i, carre(i), cube(i));
    }
    return 0;
}                        /* fin du bloc principal */

int cube(int x) {        /* définition de la fonction cube */
    return x * carre(x);
}

int carre(int x) {       /* définition de la fonction carre */
    return x * x;
}
