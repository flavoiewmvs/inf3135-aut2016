#include <stdio.h>

#define CARRE(x) ((x) * (x))
#define CARRE1(x) x * x
#define CARRE2(x) (x * x)

int main() {
    int x = 6, j, k, m, n;
    j = -CARRE1(x+1);
    k = -CARRE2(x+1);
    m = -CARRE(x+1);
    n = -CARRE(x++);
}
