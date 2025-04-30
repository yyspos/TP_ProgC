#include <stdio.h>
#include <math.h> // pour utiliser M_PI

int main() {
    // Déclaration du rayon (tu peux changer la valeur ici)
    double rayon = 5.0;

    // Calcul de l'aire (π × r²)
    double aire = M_PI * rayon * rayon;

    // Calcul du périmètre (2 × π × r)
    double perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Rayon du cercle : %.2f\n", rayon);
    printf("Aire du cercle : %.2f\n", aire);
    printf("Périmètre du cercle : %.2f\n", perimetre);

    return 0;
}
