#include <stdio.h>

int main() {
    char *mois[] = {"lundi", "mardi", "mercredi",
                    "jeudi", "vendredi", "samedi",
                    "dimanche"};
    char **p;

    p = mois;
    printf("%c %c %s %s\n", **p, *mois[0], *(p+1),
           mois[1]);
}
