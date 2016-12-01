#include <stdio.h>

unsigned longueur(char chaine[]) {
    unsigned int i = 0;
    while (chaine[i] != '\0')
        i++;
    return i;
}

int main() {
    char chaine[] = "tomate";
    printf("%d\n", longueur(chaine));
}
