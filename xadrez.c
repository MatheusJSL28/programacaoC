#include <stdio.h>

int main() {

    // Movimentação da Torre
    for (int t = 0; t < 5; t++) {
        printf("Torre para direita\n");
    }

    printf("\n");

    // Movimentação do Bispo
    int b = 0;
    while (b < 5) {
        printf("Bispo para diagonal direita para cima\n");
        b++;
    }

    printf("\n");

    // Movimentação da Rainha
    int r = 0;
    do {
        printf("Rainha para esquerda\n");
        r++;
    } while (r < 8);

    printf("\n");

    return 0;
}
