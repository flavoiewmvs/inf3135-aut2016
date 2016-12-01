#include <stdio.h>

void echangeEntier(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void echange(void * a, void * b) {
    void * tmp = a; // void * tmp = *a; -> Ne fonctionne pas !
    a = b;          // *a = *b;         -> Ne fonctionne pas !
    b = tmp;        // *b = tmp;        -> Ne fonctionne pas !
}

int main() {
    int a = 3, b = 2;
    echange(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    echangeEntier(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
