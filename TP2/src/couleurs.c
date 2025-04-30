#include <stdio.h>

// Définition de la structure pour une couleur RGBA
struct CouleurRGBA {
    unsigned char r; // rouge
    unsigned char g; // vert
    unsigned char b; // bleu
    unsigned char a; // alpha (opacité)
};

int main() {
    // Tableau de 10 couleurs
    struct CouleurRGBA couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x11, 0x22, 0x33, 0x80},
        {0xaa, 0xbb, 0xcc, 0xee},
        {0x00, 0xff, 0x00, 0x99},
        {0xff, 0x00, 0x00, 0x55},
        {0x44, 0x44, 0x44, 0x44},
        {0x12, 0x34, 0x56, 0x78},
        {0xde, 0xad, 0xbe, 0xef},
        {0x00, 0x00, 0x00, 0x00}
    };

    // Affichage des 10 couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("  Rouge : %3d\n", couleurs[i].r);
        printf("  Vert  : %3d\n", couleurs[i].g);
        printf("  Bleu  : %3d\n", couleurs[i].b);
        printf("  Alpha : %3d\n", couleurs[i].a);
        printf("---------------------\n");
    }

    return 0;
}
