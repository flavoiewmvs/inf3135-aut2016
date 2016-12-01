#include <stdio.h>

const int a = 100, b = 1;
int c = 0;

int main() {
    if (a < 100)
        if (b)
            c = 5;
        else
            c = -5;
    printf("%d\n", c);

    if (a < 100) {
        if (b)
            c = 5;
        } else
            c = -5;
    printf("%d\n", c);
}
