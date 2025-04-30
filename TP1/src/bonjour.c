#include <stdio.h>

int main() {
    // On choisit les deux nombres : a est la base, b est l'exposant
    int a = 2; // par exemple 2
    int b = 3; // par exemple 3

    // Variable pour stocker le résultat (on commence à 1)
    int resultat = 1;

    // On répète la multiplication a * a * a ... b fois
    for (int i = 0; i < b; i++) {
        resultat = resultat * a;
    }

    // On affiche le résultat final
    printf("%d à la puissance %d = %d\n", a, b, resultat);

    return 0; // Fin du programme
}
