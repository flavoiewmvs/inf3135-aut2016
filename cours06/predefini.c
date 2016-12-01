#include <stdio.h>

int main() {
    // Nom du fichier source courant
    printf("%s\n", __FILE__);
    // Numéro de la ligne courante
    printf("%d\n", __LINE__);
    // Date de compilation (format MMM JJ AAAA)
    printf("%s\n", __DATE__);
    // Heure de compilation (format HH:MM:SS)
    printf("%s\n", __TIME__);
    // 1 si le compilateur est conforme à la norme ISO
    printf("%d\n", __STDC__);
    return 0;
}
