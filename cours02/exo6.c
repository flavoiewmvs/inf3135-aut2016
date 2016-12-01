#include <stdio.h>

int main() {
    int x = 1, y, z;
    y = (x-- == 0 ? 1 : 2);
    z = (++x == 1 ? 1 : 2);

    printf("%d %d\n", y, z);
}
