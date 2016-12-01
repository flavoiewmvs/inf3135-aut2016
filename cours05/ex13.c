#include <stdio.h>

const unsigned int MAX_LIGNE = 20;

int main() {
    char ligne[MAX_LIGNE];
    int i = 0;
    while (gets(ligne) != NULL) {
        printf("%d : %s\n", i++, ligne);
    }
}

