#include <stdio.h>

int main() {
    typedef struct {
        int quantite;
        float poids;
    } Fruit;
    int a[5];

    printf("%lu %lu %lu %lu %lu\n", sizeof(int),
           sizeof(float), sizeof(Fruit), sizeof a,
           sizeof "bonjour");
}
