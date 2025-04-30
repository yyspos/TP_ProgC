#include <stdio.h>

int main() {
    // Déclaration des tableaux pour 5 étudiant.e.s
    char noms[5][20] = {"Durand", "Martin", "Lemoine", "Nguyen", "Bernard"};
    char prenoms[5][20] = {"Alice", "Jean", "Lucie", "Minh", "Sophie"};
    char adresses[5][50] = {
        "12 rue des Lilas",
        "34 avenue Victor Hugo",
        "5 impasse des Fleurs",
        "78 boulevard Haussmann",
        "101 chemin Vert"
    };

    // Notes pour chaque étudiant·e dans 2 modules
    float notes_prog[5] = {15.5, 12.0, 18.0, 13.5, 16.0};   // Programmation en C
    float notes_sys[5] = {14.0, 11.5, 17.5, 14.5, 15.0};    // Système d'exploitation

    // Affichage des informations
    printf("===== Informations des étudiant.e.s =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom       : %s\n", noms[i]);
        printf("Prénom    : %s\n", prenoms[i]);
        printf("Adresse   : %s\n", adresses[i]);
        printf("Note Prog : %.2f / 20\n", notes_prog[i]);
        printf("Note Syst : %.2f / 20\n", notes_sys[i]);
        printf("-----------------------------------------\n");
    }

    return 0;
}
