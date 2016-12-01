#include <stdio.h>

#define ABS(x) ((x) > 0 ? (x) : -(x))

int main() {
    int i = -6, j, k;
    j = ABS(i);
    k = ABS;
    printf("ABS(%d) = %d\n", i, j);
    return 0;
}
