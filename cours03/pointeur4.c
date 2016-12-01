#include <stdio.h>

int main() {
    int a[3] = {1, -1, 2}, *pi, *pi2;
    pi = a;
    pi2 = &a[2];
    printf("%d ", pi2 - pi);
    printf("%d ", *(--pi2));
    printf("%d\n", *(pi + 1));
    if (pi + 1 == pi2)
        printf("pi et pi2 pointent vers la même
                case mémoire.\n");
}
