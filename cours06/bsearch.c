#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main () {
    int a[] = {2,5,7,8,13,15};
    int *pi;
    int i, cle;
    
    for (cle = 1; cle <= 5; ++cle) {
        pi = (int*) bsearch (&cle, a, 6, sizeof(int), compare);
        if (pi != NULL)
            printf("%d est dans le tableau.\n", *pi);
        else
            printf ("%d n'est pas dans le tableau.\n", cle);
    }
    return 0;
}
