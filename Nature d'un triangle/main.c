#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;

    // Entrer les longueurs des trois c�t�s
    printf("Entrez les trois cot�s du triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // V�rifier si c'est un triangle valide
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // D�terminer la nature du triangle

        // Triangle �quilat�ral
        if (a == b && b == c) {
            printf("Le triangle est �quilat�ral.\n");
        }
        // Triangle isoc�le
        else if (a == b || b == c || a == c) {
            printf("Le triangle est isoc�le.\n");
        }
        // Triangle scal�ne
        else {
            printf("Le triangle est scal�ne.\n");
        }

        // D�terminer si c'est un triangle rectangle
        if (fabs(a * a + b * b - c * c) < 0.0001 ||
            fabs(a * a + c * c - b * b) < 0.0001 ||
            fabs(b * b + c * c - a * a) < 0.0001) {
            printf("Le triangle est aussi rectangle.\n");
        }
    } else {
        // Si ce n'est pas un triangle valide
        printf("Les cot�s donn�s ne forment pas un triangle valide.\n");
    }

    return 0;
}
