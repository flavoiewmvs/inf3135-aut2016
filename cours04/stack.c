#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Types
// -----

struct StackNode {
    char content;           // Contenu du noeud
    struct StackNode *next; // Noeud suivant
};

typedef struct {
    struct StackNode *first; // Pointeur vers le premier noeud
    int size;                // Nombre d'elements dans la pile
} Stack;

// Prototypes
// ----------

Stack stackCreate();
bool stackIsEmpty(const Stack *s);
void stackPush(Stack *s, char content);
char stackPop(Stack *s);
void stackDelete(Stack *s);

// Implementation
// --------------

/**
 * Cree une pile vide et la retourne.
 *
 * @returns  La pile vide
 */
Stack stackCreate() {
    Stack s;
    s.first = NULL;
    s.size = 0;
    return s;
}

/**
 * Verifie si la pile pointee est vide.
 *
 * @param s  Un pointeur vers la pile
 * @returns  Vrai si et seulement si la pile est vide
 */
bool stackIsEmpty(const Stack *s) {
    return s->size == 0;
}

/**
 * Ajoute un element sur le dessus de la pile.
 *
 * @param s        Un pointeur vers la pile
 * @param content  Le contenu de l'element a ajouter
 */
void stackPush(Stack *s, char content) {
    struct StackNode *node = (struct StackNode*)malloc(sizeof(struct StackNode));
    node->content = content;
    node->next = s->first;
    s->first = node;
    ++s->size;
}

/**
 * Supprime l'element sur le dessus de la pile et le retourne.
 *
 * @param s  Un pointeur vers la pile
 * @returns  Le contenu de l'element au-dessus de la pile
 */
char stackPop(Stack *s) {
    if (!stackIsEmpty(s)) {
        char content = s->first->content;
        struct StackNode *node = s->first;
        s->first = node->next;
        free(node);
        --s->size;
        return content;
    } else {
        printf("Cannot pop from empty stack");
        return '?';
    }
}

/**
 * Supprime la pile pointee.
 *
 * @param s  Un pointeur vers la pile
 */
void stackDelete(Stack *s) {
    while (!stackIsEmpty(s)) {
        stackPop(s);
    }
}

// Application
// -----------

/**
 * Retourne vrai si et seulement si l expression est equilibree.
 *
 * Une expression est equilibree si chaque parenthese ouvrante est
 * associee a une parenthese fermante correspondante.
 *
 * @param expr  L expression a examiner
 * @returns     Vrai si et seulement si l expression est equilibree
 */
bool isBalanced(char *expr) {
    bool balanced = true;
    Stack s = stackCreate();
    int i = 0;
    while (balanced && expr[i] != '\0') {
        if (expr[i] == '(') {
            stackPush(&s, ')');
        } else if (expr[i] == '[') {
            stackPush(&s, ']');
        } else if (expr[i] == '{') {
            stackPush(&s, '}');
        } else if (expr[i] == ')' || expr[i] == ']' || expr[i] == '}') {
            if (stackIsEmpty(&s)) {
                balanced = false;
            } else {
                balanced = expr[i] == stackPop(&s);
            }
        }
        ++i;
    }
    stackDelete(&s);
    return balanced;
}

// Main
// ----
int main() {
    char expr1[] = "[x * (y + 2)] / {3 - [z + (2 - x)]}";
    char expr2[] = "[x * (y + 2)] / 3 - [z + (2 - x)]}";
    char expr3[] = "{[}]";
    char expr4[] = "[[{}()]()]";
    char expr5[] = "";

    printf("Is the expression \"%s\" balanced ? %s\n", expr1,
           isBalanced(expr1) ? "yes" : "no");
    printf("Is the expression \"%s\" balanced ? %s\n", expr2,
           isBalanced(expr2) ? "yes" : "no");
    printf("Is the expression \"%s\" balanced ? %s\n", expr3,
           isBalanced(expr3) ? "yes" : "no");
    printf("Is the expression \"%s\" balanced ? %s\n", expr4,
           isBalanced(expr4) ? "yes" : "no");
    printf("Is the expression \"%s\" balanced ? %s\n", expr5,
           isBalanced(expr5) ? "yes" : "no");
}
