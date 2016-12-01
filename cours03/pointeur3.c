#include <stdio.h>

int main() {
    int a[3] = {1,2,3}, *pi;
    pi = a;          /* initialisation de pi */
    printf("%p %p %d %d %d %d\n",
           a, pi, a[0], a[1], a[2], *pi);
}
