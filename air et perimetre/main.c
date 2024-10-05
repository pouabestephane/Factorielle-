#include <stdio.h>
#include <math.h> // Pour la fonction sqrt()

#define PI 3.14159265358979323846

void air_et_perimetre_cercle() {
    float rayon, air, perimetre;

    printf("Entrez le rayon du cercle: ");
    scanf("%f", &rayon);

    air = PI * rayon * rayon;
    perimetre = 2 * PI * rayon;

    printf("Air du cercle: %.2f\n", air);
    printf("P�rim�tre du cercle: %.2f\n", perimetre);
}

void air_et_perimetre_rectangle() {
    float longueur, largeur, air, perimetre;

    printf("Entrez la longueur du rectangle: ");
    scanf("%f", &longueur);
    printf("Entrez la largeur du rectangle: ");
    scanf("%f", &largeur);

    air = longueur * largeur;
    perimetre = 2 * (longueur + largeur);

    printf("Air du rectangle: %.2f\n", air);
    printf("P�rim�tre du rectangle: %.2f\n", perimetre);
}

void air_et_perimetre_triangle() {
    float a, b, c, s, air, perimetre;

    printf("Entrez les trois c�t�s du triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    perimetre = a + b + c;
    s = perimetre / 2;  // demi-p�rim�tre
    air = sqrt(s * (s - a) * (s - b) * (s - c));  // Formule de H�ron

    printf("Air du triangle: %.2f\n", air);
    printf("P�rim�tre du triangle: %.2f\n", perimetre);
}

int main() {
    int choix;

    printf("Choisissez une forme:\n");
    printf("1. Cercle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Entrez votre choix (1-3): ");
    scanf("%d", &choix);

    switch (choix) {

        case 1:
            air_et_perimetre_cercle();
            break;
        case 2:
            air_et_perimetre_rectangle();
            break;
        case 3:
            air_et_perimetre_triangle();
            break;
        default:
            printf("Choix non valide.\n");
            break;
    }

    return 0;
}

