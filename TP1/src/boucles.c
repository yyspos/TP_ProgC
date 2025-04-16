#include <stdio.h>

int main() {
    int compteur;

    printf("Entrez une valeur pour compteur (inférieure à 10) : ");
    fflush(stdout);
    
    if (scanf("%d", &compteur) != 1) {
        printf("Erreur : Vous devez entrer un nombre entier.\n");
        return 1;
    }

    if (compteur >= 10 || compteur < 1) {
        printf("Erreur : compteur doit être un entier strictement compris entre 1 et 9.\n");
        return 1;
    }

    printf("\nTriangle avec des boucles for :\n");
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Première et dernière ligne : que des étoiles
            if (i == 1 || i == compteur) {
                printf("* ");
            }
            // Première et dernière position sur la ligne : étoiles
            else if (j == 1 || j == i) {
                printf("* ");
            }
            // Le reste : des dièses
            else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
