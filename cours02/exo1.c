#include <stdio.h>

int main() {
    int i, s = 0, j = 1;
    for (i = 1; i < 5; i++) {
        j = (-1) * j;
        s = s + j * i;
    }
    printf("%d\n", s);
}
