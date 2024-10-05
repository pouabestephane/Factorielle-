#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;

    // Entrer les longueurs des trois côtés
    printf("Entrez les trois cotés du triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Vérifier si c'est un triangle valide
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Déterminer la nature du triangle

        // Triangle équilatéral
        if (a == b && b == c) {
            printf("Le triangle est équilatéral.\n");
        }
        // Triangle isocèle
        else if (a == b || b == c || a == c) {
            printf("Le triangle est isocèle.\n");
        }
        // Triangle scalène
        else {
            printf("Le triangle est scalène.\n");
        }

        // Déterminer si c'est un triangle rectangle
        if (fabs(a * a + b * b - c * c) < 0.0001 ||
            fabs(a * a + c * c - b * b) < 0.0001 ||
            fabs(b * b + c * c - a * a) < 0.0001) {
            printf("Le triangle est aussi rectangle.\n");
        }
    } else {
        // Si ce n'est pas un triangle valide
        printf("Les cotés donnés ne forment pas un triangle valide.\n");
    }

    return 0;
}
