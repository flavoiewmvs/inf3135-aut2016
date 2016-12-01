#include <stdio.h>

int main() {
    double somme, valeur;

    somme = 0.0;
    while (scanf("%lf", &valeur)) {
        somme += valeur;
        printf("Total : %.2f\n", somme);
    }
    return 0;
}
