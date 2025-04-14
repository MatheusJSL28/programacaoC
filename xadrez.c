#include <stdio.h>

// Criação dos loops usando Recursividade
void looptorre (int t) {
    if (t > 0) {
        printf("Torre para direita\n");
        looptorre(t - 1);
    }

}

void loopbispo (int b) {
    if (b > 0) {
        int ce = 0;
        do {
            for (int cb = 0; cb < 1; cb++) {
                printf("Bispo para direita\n");
            }
            printf("Bispo para cima\n");
            ce++;
        } while (ce != 1);
        loopbispo(b - 1);
    }

}

void looprainha (int r) {
    if (r > 0) {
        printf("Rainha para esquerda\n");
        looprainha(r - 1);
    }

}



int main() {

    // Movimentação da Torre
    int jogadastorre = 5;
    looptorre(jogadastorre);

    printf("\n");

    // Movimentação do Bispo
    int jogadasbispo = 5;
    loopbispo(jogadasbispo);

    printf("\n");

    // Movimentação da Rainha
    int jogadasrainha = 8;
    looprainha(jogadasrainha);

    printf("\n");


    // Movimentação do Cavalo
    int movimentocompleto = 0;

    do {
        for (int cb = 0; cb < 2 ; cb++) {
            printf("Cavalo para cima\n");
            if (cb == 0) continue;
            printf("Cavalo para direita\n");
        }
        movimentocompleto++;
    } while (movimentocompleto == 0);

    printf("\n");

    return 0;
}
