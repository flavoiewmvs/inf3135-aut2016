#include <stdio.h>

int main() {
    char c;

    while ((c = getchar()) != '\n') {
        putchar(toupper(c));
    }
    return 0;
}
