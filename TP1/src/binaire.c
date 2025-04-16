#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int i;
    int started = 0;
    for (i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit || started || i == 0) {
            printf("%d", bit);
            started = 1;
        }
    }
    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};

    for (int i = 0; i < 5; i++) {
        printf("%u en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
