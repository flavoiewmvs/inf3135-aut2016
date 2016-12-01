#include <stdio.h>

void echanger(int a, int b) {
    int z = a;
    a = b;
    b = z;
}

int main() {
    int a = 5, b = 6;
    echanger(a, b);
    printf("%d %d\n", a, b);
}
