#include <stdio.h>
#include <string.h>

// Définition de la structure Étudiant
struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1; // Note en Programmation
    float note2; // Note en Système
};

int main() {
    struct Etudiant etudiants[5];

    // Saisie manuelle des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Nguyen");
    strcpy(etudiants[2].prenom, "Linh");
    strcpy(etudiants[2].adresse, "10, Rue des Sciences, Villeurbanne");
    etudiants[2].note1 = 17.2;
    etudiants[2].note2 = 13.7;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Luc");
    strcpy(etudiants[3].adresse, "5, Allée du Parc, Lyon");
    etudiants[3].note1 = 13.0;
    etudiants[3].note2 = 15.4;

    strcpy(etudiants[4].nom, "Kone");
    strcpy(etudiants[4].prenom, "Aminata");
    strcpy(etudiants[4].adresse, "30, Rue Victor Hugo, Lyon");
    etudiants[4].note1 = 15.6;
    etudiants[4].note2 = 16.3;

    // Affichage des données
    printf("===== Informations des étudiant.e.s =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prénom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 (Programmation)         : %.1f / 20\n", etudiants[i].note1);
        printf("Note 2 (Système d'exploitation): %.1f / 20\n", etudiants[i].note2);
        printf("-------------------------------------------\n");
    }

    return 0;
}
