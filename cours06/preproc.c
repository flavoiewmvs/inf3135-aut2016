
#include <stdio.h>

#define i x

/*
 * Commentaire quelconque
 */
int main() {
    int i = 6, j;
    if (i) {
#undef i
        j = i * 2;
    }
    return 0;
}
