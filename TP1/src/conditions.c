#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {

        // Si divisible par 11, on saute ce nombre
        if (i % 11 == 0) {
            continue;
        }

        // Si divisible par 5 ou par 7, on l'ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000, on arrête la boucle
        if (somme > 5000) {
            break;
        }
    }

    // Affichage de la somme finale
    printf("Somme finale : %d\n", somme);

    return 0;
}
