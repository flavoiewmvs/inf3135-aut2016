#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

struct StackNode;
struct Stack {
    struct StackNode *first; // Pointeur vers le premier noeud
    int size;                // Nombre d'elements dans la pile
};


// Types
// -----

struct Stack;

/**
 * Cree une pile vide et la retourne.
 *
 * @returns  La pile vide
 */
struct Stack stackCreate();

/**
 * Verifie si la pile pointee est vide.
 *
 * @param s  Un pointeur vers la pile
 * @returns  Vrai si et seulement si la pile est vide
 */
bool stackIsEmpty(const struct Stack *s);

/**
 * Ajoute un element sur le dessus de la pile.
 *
 * @param s        Un pointeur vers la pile
 * @param content  Le contenu de l'element a ajouter
 */
void stackPush(struct Stack *s, char content);

/**
 * Supprime l'element sur le dessus de la pile et le retourne.
 *
 * @param s  Un pointeur vers la pile
 * @returns  Le contenu de l'element au-dessus de la pile
 */
char stackPop(struct Stack *s);

/**
 * Supprime la pile pointee.
 *
 * @param s  Un pointeur vers la pile
 */
void stackDelete(struct Stack *s);

#endif
