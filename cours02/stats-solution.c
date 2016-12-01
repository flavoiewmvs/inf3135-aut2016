#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int valeurs[], int nbValeurs) {
    int m = valeurs[0];
    int i;
    for (i = 1; i < nbValeurs; ++i) {
        if (valeurs[i] > m) m = valeurs[i];
    }
    return m;
}

int min(int valeurs[], int nbValeurs) {
    int m = valeurs[0];
    int i;
    for (i = 1; i < nbValeurs; ++i) {
        if (valeurs[i] < m) m = valeurs[i];
    }
    return m;
}

float moyenne(int valeurs[], int nbValeurs) {
    int i;
    float s = 0.0;
    for (i = 0; i < nbValeurs; ++i) {
        s += valeurs[i];
    }
    return s / nbValeurs;
}

float ecartType(int valeurs[], int nbValeurs) {
    int i;
    float xbar = moyenne(valeurs, nbValeurs);
    float s = 0.0;
    for (i = 0; i < nbValeurs; ++i) {
        s += (valeurs[i] - xbar) * (valeurs[i] - xbar);
    }
    return sqrt(s / (nbValeurs - 1));
}

int obtenirValeurs(const char s[], int valeurs[]) {
    char *reste;
    int valeur;
    int i;
    valeur = strtol(s, &reste, 10);
    i = 0;
    while (*reste != '\0') {
        valeurs[i] = valeur;
        ++reste;
        valeur = strtol(reste, &reste, 10);
        ++i;
    }
    valeurs[i] = valeur;
    return i + 1;
}

int main(int argc, char *argv[]) {
    int valeurs[80];
    int nbValeurs;
    if (argc != 2) {
        printf("Nombre d'arguments invalides!n");
        printf("  USAGE: %s <nombres>", argv[0]);
        return 1;
    } else {
        nbValeurs = obtenirValeurs(argv[1], valeurs);
        printf("Moyenne: %f\n", moyenne(valeurs, nbValeurs));
        printf("Écart-type: %f\n", ecartType(valeurs, nbValeurs));
        printf("Minimum: %d\n", min(valeurs, nbValeurs));
        printf("Maximum: %d\n", max(valeurs, nbValeurs));
        return 0;
    }
}
