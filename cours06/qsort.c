#include <stdio.h>
#include <stdlib.h>

/* La fonction de comparaison doit avoir 
 * la signature (const void *, const void *)
 */
int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main () {
    int a[] = {8,3,4,2,0,5};
    int i;

    qsort(a, 6, sizeof(int), compare);
    for (i = 0; i < 6; ++i)
        printf ("%d ", a[i]);
    return 0;
}
