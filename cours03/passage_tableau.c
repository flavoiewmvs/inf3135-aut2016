#include <stdio.h>

float produit_scalaire(const float a[], const float b[],
                       unsigned taille) {
    int i;
    float p = 0.0;
    for (i = 0; i < taille; i++) {
        p += a[i] * b[i];
    }
    return p;
}

int main() {
    float u[] = {1.0, -2.0, 0.0};
    float v[] = {-1.0, 1.0, 3.0};
    printf("%f\n", produit_scalaire(u, v, 3));
}
