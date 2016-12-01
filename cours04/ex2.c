#include <stdio.h>

int main() {
    typedef enum sexe {M = 1, F = 2} Sexe;
    Sexe s = 8;
    int t = M;
    printf("%d %d\n", s, t);
}

