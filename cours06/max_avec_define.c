#include <stdio.h>

#define MAX(a,b) (a) > (b) ? (a) : (b)

int main() {
    int i = 8, j = 5;
    char c = 'A', d = 'a';
    char t[] = "banane", s[] = "pomme";

    printf("max(%d,%d) = %d\n", i, j, MAX(i,j));
    printf("max(%c,%c) = %c\n", c, d, MAX(c,d));
    printf("max(%s,%s) = %s\n", s, t, MAX(s,t));
    return 0;
}
