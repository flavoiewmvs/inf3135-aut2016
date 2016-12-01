#include <stdio.h>
#include <math.h>

int main() {
    int i;

    printf("i    sqrt(i)   cos(i)\n");
    printf("----------------------\n");
    for (i = 8; i < 10000; i *= 2) {
        printf("%4.4d %-8.4f %8.4f\n", i, sqrt(i), cos(i));
    }
}

