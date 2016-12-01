#include <stdio.h>

int main() {
    char ligne[10];
    fgets(ligne, 10, stdin);
    printf("Ligne : /%s/", ligne);
    return 0;
}
