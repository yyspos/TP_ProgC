#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '+';  // Change la valeur ici pour tester d'autres opérations

    int resultat;

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;
        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;
        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;
        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zéro !\n");
            }
            break;
        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;
        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;
        case '~':
            // Opérateur unaire, on applique sur num1 uniquement
            resultat = ~num1;
            printf("~%d = %d\n", num1, resultat);
            break;
        default:
            printf("Opérateur non reconnu.\n");
    }

    return 0;
}

