#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "generic_stack.h"

// Types
// -----

struct StackNode {
    void *content;          // Contenu du noeud
    struct StackNode *next; // Noeud suivant
};

// Implementation
// --------------

Stack stackCreate() {
    Stack s;
    s.first = NULL;
    s.size = 0;
    return s;
}

bool stackIsEmpty(const Stack *s) {
    return s->size == 0;
}

void stackPush(Stack *s, void *content) {
    struct StackNode *node = (struct StackNode*)malloc(sizeof(struct StackNode));
    node->content = content;
    node->next = s->first;
    s->first = node;
    ++s->size;
}

void *stackPop(Stack *s) {
    if (!stackIsEmpty(s)) {
        void *content = s->first->content;
        struct StackNode *node = s->first;
        s->first = node->next;
        free(node);
        --s->size;
        return content;
    } else {
        printf("Cannot pop from empty stack");
        return NULL;
    }
}

void stackDelete(Stack *s) {
    while (!stackIsEmpty(s)) {
        stackPop(s);
    }
}
