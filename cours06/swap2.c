#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void echange(void * const a, void * const b, int taille) {
    void * const temp = malloc(taille);
    memcpy(temp, a, taille);
    memcpy(a, b, taille);
    memcpy(b, temp, taille);
    free(temp);
}

int main() {
    int a = 3, b = 2;
    echange(&a, &b, sizeof(int));
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
