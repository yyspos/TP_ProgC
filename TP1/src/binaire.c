#include <stdio.h>

void afficher_binaire(unsigned int n) {
    int taille = sizeof(n) * 8; // typiquement 32 bits pour un int

    int bitTrouve = 0; // Pour ne pas afficher les zéros en tête

    for (int i = taille - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1) {
            bitTrouve = 1;
        }
        if (bitTrouve) {
            printf("%d", bit);
        }
    }

    // Si tous les bits étaient 0 (par exemple pour n = 0)
    if (!bitTrouve) {
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nb_nombres = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < nb_nombres; i++) {
        printf("Décimal : %u -> Binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }

    return 0;
}
