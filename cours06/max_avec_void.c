#include <stdio.h>

void *max(void *x, void *y) {
    return *x > *y ? x : y;
}

int main() {
    int i = 8, j = 5;
    char c = 'A', d = 'a';

    printf("max(%d,%d) = %d\n", i, j, *(int*)max(&i, &j));
    printf("max(%c,%c) = %c\n", c, d, *(char*)max(&c, &d));
    return 0;
}
