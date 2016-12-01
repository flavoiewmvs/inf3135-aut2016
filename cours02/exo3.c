#include <stdio.h>
#include <stdbool.h>

int main() {
    int tableau[] = {0,4,5,3,6,1,2};
    int i = 0;
    int trouve = false;
    while (!trouve && i < 7) {
        if (tableau[i] == 2) {
            trouve = true;
            break;
        } else if (tableau[i] == 4) {
            i = i - 1;
            continue;
        }
        i = i + 2;
    }
    printf("%d %d\n", i, trouve);
}
