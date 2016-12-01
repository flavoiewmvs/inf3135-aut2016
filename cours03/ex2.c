#include <stdio.h>
#include <string.h>

int main() {
    char s[10] = "Salut ";
    char t[] = "toi!";
    strcat(s, t);
    printf("%s", s);
    return 0;
}
