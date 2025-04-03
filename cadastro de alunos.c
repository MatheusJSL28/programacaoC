#include <stdio.h>

int main() {

    int idade, matricula;
    float altura;
    char nome[50], sobrenome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite seu sobrenome: \n");
    scanf("%s", &sobrenome);

    printf("Digite o número da matrícula: \n");
    scanf("%d", &matricula);

    printf("N° da Matrícula: %d  -  Nome do Aluno: %s %s\n", matricula, nome, sobrenome);
    printf("Idade: %d   -   Altura: %.2f", idade, altura);

    return 0;
    
}
