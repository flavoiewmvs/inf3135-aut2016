#include <stdio.h>

int carre(int x) {
    x *= x;
    return x;
}

int main() {
    int x = 2;
    printf("%d %d\n", carre(x), x);
}
