#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "bonjour";
    char t[] = "patate";

    printf("Longueur de \"%s\" et \"%s\" : %lu, %lu\n",
           s, t, strlen(s), strlen(t));
    printf("strcmp(\"%s\", \"%s\") : %d\n", s, t,
           strcmp(s, t));
    return 0;
}
