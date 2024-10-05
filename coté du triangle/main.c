#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    int choix;

    printf("Choisissez ce que vous voulez calculer :\n");
    printf("1 - Hypoténuse\n");
    printf("2 - Coté\n");
    scanf("%d", &choix);

    if (choix == 1) {
        // Calcul de l'hypoténuse
        printf("Entrez les deux cotés adjacents :\n");
        scanf("%lf %lf", &a, &b);
        c = sqrt(a * a + b * b); // Théorème de Pythagore
        printf("L'hypoténuse est : %.2lf\n", c);
    } else if (choix == 2) {
        // Calcul d'un côté
        printf("Entrez l'hypoténuse et un coté :\n");
        scanf("%lf %lf", &c, &a);
        if (c > a) {
            b = sqrt(c * c - a * a); // Théorème de Pythagore
            printf("L'autre coté est : %.2lf\n", b);
        } else {
            printf("L'hypoténuse doit être plus grande que le coté.\n");
        }
    } else {
        printf("Choix invalide.\n");
    }

    return 0;
}
