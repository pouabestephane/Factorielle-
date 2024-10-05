#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    int choix;

    printf("Choisissez ce que vous voulez calculer :\n");
    printf("1 - Hypot�nuse\n");
    printf("2 - Cot�\n");
    scanf("%d", &choix);

    if (choix == 1) {
        // Calcul de l'hypot�nuse
        printf("Entrez les deux cot�s adjacents :\n");
        scanf("%lf %lf", &a, &b);
        c = sqrt(a * a + b * b); // Th�or�me de Pythagore
        printf("L'hypot�nuse est : %.2lf\n", c);
    } else if (choix == 2) {
        // Calcul d'un c�t�
        printf("Entrez l'hypot�nuse et un cot� :\n");
        scanf("%lf %lf", &c, &a);
        if (c > a) {
            b = sqrt(c * c - a * a); // Th�or�me de Pythagore
            printf("L'autre cot� est : %.2lf\n", b);
        } else {
            printf("L'hypot�nuse doit �tre plus grande que le cot�.\n");
        }
    } else {
        printf("Choix invalide.\n");
    }

    return 0;
}
