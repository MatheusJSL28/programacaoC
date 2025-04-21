#include <stdio.h>
 
int main() {

    // Criação do Tabuleiro
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
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    
    
    //Criação dos vetores das coordenadas
    int origemcone[2] = {0, 5};

    int origemcruz[2] = {4, 2};

    int origemoctaedro[2] = {7, 7};

    int navio1[2] = {1, 1};

    int navio2[2] = {7, 9};

    int navio3[2] = {8, 1};

    int navio4[2] = {1, 8};


    // Condicionais que garante que a área de efeito do cone estará dentro do tabuleiro
    origemcone[0] = origemcone[0] + 1 > 9 ? origemcone[0] - 2 : origemcone[0];
    origemcone[0] = origemcone[0] + 2 > 9 && origemcone[0] + 1 == 9 ? origemcone[0] - 1 : origemcone[0];
    origemcone[1] = origemcone[1] + 1 > 9 ? origemcone[1] - 2 : origemcone[1];
    origemcone[1] = origemcone[1] + 2 > 9 && origemcone[1] + 1 == 9? origemcone[1] - 1 : origemcone[1];
    origemcone[1] = origemcone[1] - 1 < 0 ? origemcone[1] + 2 : origemcone[1];
    origemcone[1] = origemcone[1] - 2 < 0 && origemcone[1] - 1 == 0? origemcone[1] + 1 : origemcone[1];

    // Condicionais que garante que a área de efeito da cruz estará dentro do tabuleiro
    origemcruz[0] = origemcruz[0] + 1 > 9 ? origemcruz[0] - 1 : origemcruz[0];
    origemcruz[0] = origemcruz[0] - 1 < 0 ? origemcruz[0] + 1 : origemcruz[0];
    origemcruz[1] = origemcruz[1] + 1 > 9 ? origemcruz[1] - 2 : origemcruz[1];
    origemcruz[1] = origemcruz[1] + 2 > 9 && origemcruz[1] + 1 == 9 ? origemcruz[1] - 1 : origemcruz[1];
    origemcruz[1] = origemcruz[1] - 1 < 0 ? origemcruz[1] + 2 : origemcruz[1];
    origemcruz[1] = origemcruz[1] - 2 < 0 && origemcruz[1] - 1 == 0 ? origemcruz[1] + 1 : origemcruz[1];

    // Condicionais que garante que a área de efeito do octaedro estará dentro do tabuleiro
    origemoctaedro[0] = origemoctaedro[0] + 1 > 9 ? origemoctaedro[0] - 1 : origemoctaedro[0];
    origemoctaedro[0] = origemoctaedro[0] - 1 < 0 ? origemoctaedro[0] + 1 : origemoctaedro[0];
    origemoctaedro[1] = origemoctaedro[1] + 1 > 9 ? origemoctaedro[1] - 1 : origemoctaedro[1];
    origemoctaedro[1] = origemoctaedro[1] - 1 < 0 ? origemoctaedro[1] + 1 : origemoctaedro[1];

    // Condicionais que garante que os navios estarão dentro do tabuleiro
    navio1[1] = navio1[1] + 1 > 9 ? navio1[1] - 1 : navio1[1];
    navio1[1] = navio1[1] - 1 < 0 ? navio1[1] + 1 : navio1[1];

    navio2[0] = navio2[0] + 1 > 9 ? navio2[0] - 1 : navio2[0];
    navio2[0] = navio2[0] - 1 < 0 ? navio2[0] + 1 : navio2[0];

    navio3[0] = navio3[0] + 1 > 9 ? navio3[0] - 1 : navio3[0];
    navio3[0] = navio3[0] - 1 < 0 ? navio3[0] + 1 : navio3[0];
    navio3[1] = navio3[1] + 1 > 9 ? navio3[1] - 1 : navio3[1];
    navio3[1] = navio3[1] - 1 < 0 ? navio3[1] + 1 : navio3[1];

    navio4[0] = navio4[0] + 1 > 9 ? navio4[0] - 1 : navio4[0];
    navio4[0] = navio4[0] - 1 < 0 ? navio4[0] + 1 : navio4[0];
    navio4[1] = navio4[1] + 1 > 9 ? navio4[1] - 1 : navio4[1];
    navio4[1] = navio4[1] - 1 < 0 ? navio4[1] + 1 : navio4[1];


    // Loop que gera e substitui os valores das matrizes dos componentes no tabuleiro nas posições expressas nas coordenadas de ponto de origem
    int i;
    int j;
    
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (i == navio1[0] && j == navio1[1]) {
                tabuleiro[i][j] = 3;
                tabuleiro[i][j + 1] = 3;
                tabuleiro[i][j - 1] = 3;
            } else if (i == navio2[0] && j == navio2[1]) {
                tabuleiro[i][j] = 3;
                tabuleiro[i + 1][j] = 3;
                tabuleiro[i - 1][j] = 3;
            } else  if (i == navio3[0] && j == navio3[1]) {
                tabuleiro[i][j] = 3;
                tabuleiro[i - 1][j + 1] = 3;
                tabuleiro[i + 1][j - 1] = 3;
            } else if (i == navio4[0] && j == navio4[1]) {
                tabuleiro[i][j] = 3;
                tabuleiro[i - 1][j - 1] = 3;
                tabuleiro[i + 1][j + 1] = 3;
            } else  if (i == origemcone[0] && j == origemcone[1]) {
                tabuleiro[i][j] = 5;
                tabuleiro[i + 1][j] = 5;
                tabuleiro[i + 2][j] = 5;
                tabuleiro[i + 1][j - 1] = 5;
                tabuleiro[i + 1][j + 1] = 5;
                tabuleiro[i + 2][j + 1] = 5;
                tabuleiro[i + 2][j + 2] = 5;
                tabuleiro[i + 2][j - 1] = 5;
                tabuleiro[i + 2][j - 2] = 5;
            } else  if (i == origemcruz[0] && j == origemcruz[1]) {
                tabuleiro[i][j] = 5;
                tabuleiro[i - 1][j] = 5;
                tabuleiro[i + 1][j] = 5;
                tabuleiro[i][j + 1] = 5;
                tabuleiro[i][j + 2] = 5;
                tabuleiro[i][j - 1] = 5;
                tabuleiro[i][j - 2] = 5;
            } else  if (i == origemoctaedro[0] && j == origemoctaedro[1]) {
                tabuleiro[i][j] = 5;
                tabuleiro[i - 1][j] = 5;
                tabuleiro[i + 1][j] = 5;
                tabuleiro[i][j - 1] = 5;
                tabuleiro[i][j + 1] = 5;
            } 
        }

    }


    // Loop que exibe o tabuleiro
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            printf("%d\t", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;

}
