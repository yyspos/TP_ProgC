#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &num1, &num2);

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // Note l'espace avant %c

    switch (op) {
        case '+': printf("Résultat : %d\n", num1 + num2); break;
        case '-': printf("Résultat : %d\n", num1 - num2); break;
        case '*': printf("Résultat : %d\n", num1 * num2); break;
        case '/':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zéro.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zéro.\n");
            break;
        case '&': printf("Résultat : %d\n", num1 & num2); break;
        case '|': printf("Résultat : %d\n", num1 | num2); break;
        case '~': printf("Résultat : ~%d = %d\n", num1, ~num1); break;
        default: printf("Opérateur non reconnu.\n");
    }

    return 0;
}
