#include <stdio.h>

int carre(int x) {
    return x * x;
}

void appliqueFonction(int *domaine, int *image,
                      int (*f)(int), int taille) {
    int i;
    for (i = 0; i < taille; ++i) {
        image[i] = f(domaine[i]);
    }
}

int main() {
    int domaine[5] = {2,3,5,7,11}, image[5];
    int i;
    appliqueFonction(domaine, image, carre, 5);
    for (i = 0; i < 5; ++i) {
        printf("carre(%d) = %d\n", domaine[i], image[i]);
    }
    return 0;
}
