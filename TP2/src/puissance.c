#include <stdio.h>

int main() {
    int a = 2;   // base
    int b = 3;   // exposant
    int resultat = 1;

    // Calcul de a^b en multipliant a par lui-même b fois
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    printf("%d élevé à la puissance %d est : %d\n", a, b, resultat);

    return 0;
}
