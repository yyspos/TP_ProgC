#include <stdio.h>

int main() {
    // Déclaration et initialisation de la variable d (modifiable)
    unsigned int d = 0x10001000; // Par exemple, bits 28 et 12 à 1

    // Masques pour les 4e et 20e bits de gauche (bits 28 et 12)
    unsigned int mask_4gauche = 1U << 28;
    unsigned int mask_20gauche = 1U << 12;

    // Vérification des deux bits
    if ((d & mask_4gauche) && (d & mask_20gauche)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
