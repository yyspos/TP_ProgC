#include <stdio.h>
#include <stdint.h> // pour uint64_t et affichage des bits mémoire

int main() {
    // Déclaration des variables de base
    char c = 0x12;
    short s = 0x1234;
    int i = 0xa47865ff;
    long int l = 0x12345678;
    long long int ll = 0x1122334455667788;
    float f = 2.0f;
    double d = 3.0;
    long double ld = 4.0;

    // Déclaration des pointeurs correspondants
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Affichage avant manipulation
    printf("=== Avant la manipulation ===\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, (unsigned int)*pi);
    printf("Adresse de l  : %p, Valeur : %08lx\n", (void*)pl, (unsigned long)*pl);
    printf("Adresse de ll : %p, Valeur : %016llx\n", (void*)pll, (unsigned long long)*pll);
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : ");
    unsigned char *pbytes = (unsigned char*)pld;
    for (int i = sizeof(long double)-1; i >= 0; i--)
        printf("%02x", pbytes[i]);
    printf("\n");

    // Manipulation via pointeurs
    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0xa47865fe;
    *pl = 0x87654321;
    *pll = 0xffeeddccbbaa9988;
    *pf = 1.0f;
    *pd = 0.5;
    *pld = 0.25;

    // Affichage après manipulation
    printf("\n=== Après la manipulation ===\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, (unsigned int)*pi);
    printf("Adresse de l  : %p, Valeur : %08lx\n", (void*)pl, (unsigned long)*pl);
    printf("Adresse de ll : %p, Valeur : %016llx\n", (void*)pll, (unsigned long long)*pll);
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : ");
    for (int i = sizeof(long double)-1; i >= 0; i--)
        printf("%02x", pbytes[i]);
    printf("\n");

    return 0;
}
