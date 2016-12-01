#include <stdio.h>

int main() {
    union nombre {
        int    i;
        float  f;
        double d;
    };
    union nombre n;
    n.i = 3;
    printf("%d %f %lf\n", n.i, n.f, n.d);
    n.f = 2.0;
    printf("%d %f %lf\n", n.i, n.f, n.d);
    n.d = 3.0;
    printf("%d %f %lf\n", n.i, n.f, n.d);
}
