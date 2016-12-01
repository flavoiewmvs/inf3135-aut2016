#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Types
// -----

typedef struct {
    int *values;     // Les valeurs dans le tableau
    int currentSize; // Le nombre d'elements dans le tableau
    int capacity;    // Capacite du tableau
} Array;

// Prototypes
// ----------

Array arrayCreate();
void arrayInsert(Array *a, int element);
void arrayRemove(Array *a, int i);
bool arrayHasElement(const Array *a, int element);
int arrayGet(const Array *a, int i);
void arrayDelete(Array *a);

// Operations
// ----------

/**
 * Cree un tableau dynamique vide et le retourne.
 *
 * @returns  Le tableau 
 */
Array arrayCreate() {
    Array a;
    a.values = (int*)malloc(sizeof(int));
    a.currentSize = 0;
    a.capacity = 1;
    return a;
}

/**
 * Insere un element en fin de tableau.
 *
 * Le tableau est redimensionne si sa capacite maximale
 * est atteinte.
 *
 * @param a        Le tableau
 * @param element  L'element a inserer dans le tableau
 */
void arrayInsert(Array *a, int element) {
    if (a->currentSize >= a->capacity) {
        a->capacity *= 2;
        realloc(a->values, a->capacity * sizeof(int));
    }
    a->values[a->currentSize] = element;
    ++a->currentSize;
}

/**
 * Supprime l'element en position i et decale les
 * valeurs suivantes d'un indice vers la gauche.
 *
 * @param a  Le tableau
 * @param i  La position de l'element a supprimer
 */
void arrayRemove(Array *a, int i) {
    if (0 <= i && i < a->currentSize) {
        ++i;
        while (i < a->currentSize) {
            a->values[i - 1] = a->values[i];
            ++i;
        }
        --a->currentSize;
    } else {
        printf("Remove: invalid index %d (size = %d)\n",
               i, a->currentSize);
    }
}

/**
 * Retourne vrai si et seulement si le tableau contient
 * l'element donne.
 *
 * @param a        Le tableau
 * @param element  L'element a verifier
 * @returns        Vrai si et seulement si l'element est present
 */
bool arrayHasElement(const Array *a, int element) {
    int i = 0;
    while (i < a->currentSize && arrayGet(a, i) != element) {
        ++i;
    }
    return i < a->currentSize;
}

/**
 * Retourne l'element en position i dans le tableau.
 *
 * @param a  Le tableau
 * @param i  La position de l'element voulu
 * @returns  L'element en position i
 */
int arrayGet(const Array *a, int i) {
    if (0 <= i && i < a->currentSize) {
        return a->values[i];
    } else {
        printf("Get: invalid index %d (size = %d)\n",
               i, a->currentSize);
        return -1;
    }
}

/**
 * Affiche un tableau sur la sortie standard.
 *
 * @param a  Le tableau a afficher
 */
void arrayPrint(const Array *a) {
    int i;
    printf("[");
    for (i = 0; i < a->currentSize; ++i) {
        printf(" %d", a->values[i]);
    }
    printf(" ]");
}

/**
 * Supprime un tableau dynamique.
 *
 * @param a  Le tableau
 */
void arrayDelete(Array *a) {
    free(a->values);
}


// Main
// ----
int main() {
    Array a = arrayCreate();
    printf("Inserting 3, 2, 5, 7, 8, 7\n");
    arrayInsert(&a, 3);
    arrayInsert(&a, 2);
    arrayInsert(&a, 5);
    arrayInsert(&a, 7);
    arrayInsert(&a, 8);
    arrayInsert(&a, 7);
    arrayPrint(&a);
    printf("\nRemoving at position 2\n");
    arrayRemove(&a, 2);
    arrayPrint(&a);
    printf("\nRemoving at position 4\n");
    arrayRemove(&a, 4);
    arrayPrint(&a);
    printf("\nRemoving at position 4\n");
    arrayRemove(&a, 4);
    arrayPrint(&a);
    printf("\nHas element %d ? %s\n", 5,
           arrayHasElement(&a, 5) ? "yes" : "no");
    printf("Has element %d ? %s\n", 2,
           arrayHasElement(&a, 2) ? "yes" : "no");
    arrayDelete(&a);
}
