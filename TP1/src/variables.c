#include <stdio.h>

int main() {
    // Types char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // Types short
    short s = -12345;
    signed short ss = -123;
    unsigned short us = 45678;

    // Types int
    int i = -123456789;
    signed int si = -100;
    unsigned int ui = 3000000000U;

    // Types long int
    long int li = -987654321L;
    signed long int sli = -1000000L;
    unsigned long int uli = 4000000000UL;

    // Types long long int
    long long int lli = -123456789012345LL;
    signed long long int slli = -999999999LL;
    unsigned long long int ulli = 123456789012345ULL;

    // Types à virgule flottante
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    // Affichage des variables
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float : %.2f\n", f);
    printf("double : %.10f\n", d);
    printf("long double : %.10Lf\n", ld);

    return 0;
}
