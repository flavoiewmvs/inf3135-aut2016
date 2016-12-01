#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

/**
 * Retourne vrai si et seulement si l'expression est equilibree.
 *
 * Une expression est equilibree si chaque parenthese ouvrante est
 * associee a une parenthese fermante correspondante.
 *
 * @param expr  L'expression a examiner
 * @returns     Vrai si et seulement si l'expression est equilibree
 */
bool isBalanced(char *expr) {
    bool balanced = true;
    struct Stack s = stackCreate();
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
