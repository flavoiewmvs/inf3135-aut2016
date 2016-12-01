#include <stdio.h>

int main() {
    union nombre {
        int    i;
        float  f;
        double d;
    };
    union nombre n1 = {3};
    printf("%d %f %lf\n", n1.i, n1.f, n1.d);
    union nombre n2 = {2.1};
    printf("%d %f %lf\n", n2.i, n2.f, n2.d);
}
