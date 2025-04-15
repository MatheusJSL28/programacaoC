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
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};

    int coordenada1[3][2] = {
        1, 0,
        1, 1,
        1, 2};

    int coordenada2[3][2] = {
        6, 9,
        7, 9,
        8, 9};

    int coordenada3[3][2] = {
        9, 0,
        8, 1,
        7, 2};

    int coordenada4[3][2] = {
        0, 7,
        1, 8,
        2, 9};
    

    // Loop que gera o tabuleiro ao mesmo tempo em que substitui a "água" pelos "navios" nas coordenadas expressas nas váriaveis coordenadas 1, 2, 3 e 4
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
            } else  if ((i == coordenada3[0][0] && j == coordenada3[0][1]) || (i == coordenada3[1][0] && j == coordenada3[1][1]) || (i == coordenada3[2][0] && j == coordenada3[2][1])) {
                tabuleiro[i][j] = navio3[0];
                printf("%d\t", tabuleiro[i][j]);
            } else if ((i == coordenada4[0][0] && j == coordenada4[0][1]) || (i == coordenada4[1][0] && j == coordenada4[1][1]) || (i == coordenada4[2][0] && j == coordenada4[2][1])) {
                tabuleiro[i][j] = navio4[0];
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
