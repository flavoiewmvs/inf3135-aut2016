#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Types
// -----

struct StackNode {
    char content;           // Contenu du noeud
    struct StackNode *next; // Noeud suivant
};

// Implementation
// --------------

struct Stack stackCreate() {
    struct Stack s;
    s.first = NULL;
    s.size = 0;
    return s;
}

bool stackIsEmpty(const struct Stack *s) {
    return s->size == 0;
}

void stackPush(struct Stack *s, char content) {
    struct StackNode *node = (struct StackNode*)malloc(sizeof(struct StackNode));
    node->content = content;
    node->next = s->first;
    s->first = node;
    ++s->size;
}

char stackPop(struct Stack *s) {
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

void stackDelete(struct Stack *s) {
    while (!stackIsEmpty(s)) {
        stackPop(s);
    }
}
