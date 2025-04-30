#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide (modifiable)
    int i, j;

    for (i = 1; i <= n; i++) {
        // Affichage des espaces pour centrer les nombres
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Affichage des nombres croissants
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Affichage des nombres décroissants
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passage à la ligne suivante
        printf("\n");
    }

    printf("Pyramide de hauteur %d générée avec succès.\n", n);

    return 0;
}

