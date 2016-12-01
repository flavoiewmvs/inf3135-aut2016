#include <stdio.h>
#include "math2.c"

extern float PI;

int main() {
    printf("PI = %f\n", PI);
    printf("Le carre de %d est %d\n",
           4, carre(4));
}
