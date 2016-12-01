#include <stdio.h>

int main() {
    int *pi, x = 104;
    pi = &x;
    printf("x vaut %d et se trouve à l'adresse %p\n", x, &x);
    printf("pi vaut %p et pointe sur la valeur %d\n", pi, *pi);

    *pi = 350;
    printf("x vaut %d et se trouve à l'adresse %p\n", x, &x);
    printf("pi vaut %p et pointe sur la valeur %d\n", pi, *pi);
}
