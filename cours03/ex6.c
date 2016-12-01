#include <stdio.h>

int main() {
    int m[2][3] = { {1,2,3}, {4,5,6} };
    int *p[2] = {m[0], m[1]};
    int **q;
    q = (int**)m;
    int i, j;

    printf("%p %p %p\n", m, p, q);
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 3; ++j)
            printf("%p %p %p\n", &m[i][j], &p[i][j], &q[i][j]);
}

