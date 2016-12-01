// Types
// -----

struct StackNode;
typedef struct {
    struct StackNode *first; // Pointeur vers le premier noeud
    int size;                // Nombre d'elements dans la pile
} Stack;


/**
 * Cree une pile vide et la retourne.
 *
 * @returns  La pile vide
 */
Stack stackCreate();

/**
 * Verifie si la pile pointee est vide.
 *
 * @param s  Un pointeur vers la pile
 * @returns  Vrai si et seulement si la pile est vide
 */
bool stackIsEmpty(const Stack *s);

/**
 * Ajoute un element sur le dessus de la pile.
 *
 * @param s        Un pointeur vers la pile
 * @param content  Le contenu de l'element a ajouter
 */
void stackPush(Stack *s, void *content);

/**
 * Supprime l'element sur le dessus de la pile et le retourne.
 *
 * @param s  Un pointeur vers la pile
 * @returns  Le contenu de l'element au-dessus de la pile
 */
void *stackPop(Stack *s);

/**
 * Supprime la pile pointee.
 *
 * @param s  Un pointeur vers la pile
 */
void stackDelete(Stack *s);
