#include <stdio.h>
#include <string.h>
#define DELIMS ":"

int main() {
    char s[80];
    char *pc, *ps;

    strcpy(s, "124:41:3::23:10");
    printf("Avec strstok:\n");
    pc = strtok(s, DELIMS);
    while (pc != NULL) {
        printf("/%s/\n", pc);
        pc = strtok(NULL, DELIMS);
    }

    strcpy(s, "124:41:3::23:10");
    printf("Avec strsep:\n");
    ps = s;
    while ((pc = strsep(&ps, DELIMS)) != NULL) {
        printf("/%s/\n", pc);
    }
}
