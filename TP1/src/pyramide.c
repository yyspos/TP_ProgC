#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // Espaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Partie croissante
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Partie décroissante
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("Génération de la pyramide terminée.\n");
    return 0;
}
