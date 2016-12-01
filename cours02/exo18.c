#include <stdio.h>

int* initialise_tableau(unsigned taille) {
    int tableau[taille];
    int i;
    for (i = 0; i < taille; ++i)
        tableau[i] = 0;
    return tableau;
}

int main() {
    int *tableau;
    tableau = initialise_tableau(4);
    printf("%d\n", tableau[0]);
}
