#include <stdio.h>

int main() {
    int compteur;

    printf("Entrez une valeur pour compteur (inférieure à 10) : ");
    fflush(stdout);
    scanf("%d", &compteur);

    if (compteur >= 10) {
        printf("Erreur : compteur doit être inférieur à 10.\n");
        return 1;
    }
    else if (compteur <= 0) {
        printf("Erreur : compteur doit être supérieur à 0.\n");
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
