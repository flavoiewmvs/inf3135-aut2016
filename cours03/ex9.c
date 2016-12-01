#include <stdio.h>

int retourneEntree(int *m, int i, int j, int tailleLigne) {
    return *(m + tailleLigne * i + j);
}

int main() {
    int m[2][3] = { {1,2,3}, {4,5,6} };
    printf("%d", retourneEntree((int*)m, 1, 1, 3));
                     // Affiche 5
}
