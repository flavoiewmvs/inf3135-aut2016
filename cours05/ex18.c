#include <stdio.h>

int main() {
    char ligne[10];
    fgets(ligne, 10, stdin);
    printf("%s\n", ligne);
    printf("%c", getchar());
}

