#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables
    int a = 2; // base
    int b = 3; // exposant
    int resultat = 1;

    // Calcul de la puissance : a^b = a * a * ... * a (b fois)
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d à la puissance %d = %d\n", a, b, resultat);

    return 0;
}
