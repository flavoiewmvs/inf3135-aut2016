#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[] = "bonjour";
    char *t = (char*) malloc(sizeof(s) + 1);
    t[0] = '\0';
    printf("avant : %s\n", t);
    strcpy(t, s);
    printf("apres : %s\n", t);
    return 0;
}
