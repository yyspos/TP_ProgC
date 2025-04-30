#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    // Initialisation de la graine pour les nombres aléatoires
    srand(time(NULL));

    // Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(tab_int + i) = rand() % 100 + 1;                // valeurs entre 1 et 100
        *(tab_float + i) = (rand() % 1000) / 100.0f;       // valeurs entre 0.00 et 9.99
    }

    // Affichage avant modification
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d%s", *(tab_int + i), i < TAILLE - 1 ? ", " : "\n");
    }

    printf("Tableau de floats (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f%s", *(tab_float + i), i < TAILLE - 1 ? ", " : "\n");
    }

    // Manipulation avec pointeurs : multiplier par 3 si indice pair
    int *p_int = tab_int;
    float *p_float = tab_float;

    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3;
        }
    }

    // Affichage après modification
    printf("\nTableau d'entiers (après x3 indices pairs) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d%s", *(p_int + i), i < TAILLE - 1 ? ", " : "\n");
    }

    printf("Tableau de floats (après x3 indices pairs) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f%s", *(p_float + i), i < TAILLE - 1 ? ", " : "\n");
    }

    return 0;
}
