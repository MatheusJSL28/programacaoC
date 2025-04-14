#include <stdio.h>
 
int main() {

    // Criação dos vetores e matrizes
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    int coordenada1[3][2] = {
        1, 0,
        1, 1,
        1, 2};

    int coordenada2[3][2] = {
        6, 9,
        7, 9,
        8, 9};
    

    // Loop que gera o tabuleiro ao mesmo tempo em que substitui a "água" pelos "navios" nas coordenadas expressas nas váriaveis coordenadas 1 e 2
    int i;
    int j;
    
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if ((i == coordenada1[0][0] && j == coordenada1[0][1]) || (i == coordenada1[1][0] && j == coordenada1[1][1]) || (i == coordenada1[2][0] && j == coordenada1[2][1])) {
                tabuleiro[i][j] = navio1[0];
                printf("%d\t", tabuleiro[i][j]);
            } else if ((i == coordenada2[0][0] && j == coordenada2[0][1]) || (i == coordenada2[1][0] && j == coordenada2[1][1]) || (i == coordenada2[2][0] && j == coordenada2[2][1])) {
                tabuleiro[i][j] = navio2[0];
                printf("%d\t", tabuleiro[i][j]);
            } else {
                printf("%d\t", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;

}
