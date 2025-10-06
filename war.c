#include <stdio.h>

// Criação do struct Territorio
typedef struct  {
    char nome[30];
    char cor[10];
    int tropas;
}Territorio; 
 
int main() {

// Criação dos territorios
Territorio T1;
Territorio T2;
Territorio T3;
Territorio T4;
Territorio T5;

// Entrada de dados dos territorios

// Territorio 1
printf("Digite o nome do territorio 1: \n");
scanf("%s", &T1.nome);

printf("Digite a cor do territorio 1: \n");
scanf("%s", &T1.cor);

printf("Digite o numero de tropas do territorio 1: \n");
scanf("%d", &T1.tropas);


// Territorio 2
printf("Digite o nome do territorio 2: \n");
scanf("%s", &T2.nome);

printf("Digite a cor do territorio 2: \n");
scanf("%s", &T2.cor);

printf("Digite o numero de tropas do territorio 2: \n");
scanf("%d", &T2.tropas);


// Territorio 3
printf("Digite o nome do territorio 3: \n");
scanf("%s", &T3.nome);

printf("Digite a cor do territorio 3: \n");
scanf("%s", &T3.cor);

printf("Digite o numero de tropas do territorio 3: \n");
scanf("%d", &T3.tropas);


// Territorio 4
printf("Digite o nome do territorio 4: \n");
scanf("%s", &T4.nome);

printf("Digite a cor do territorio 4: \n");
scanf("%s", &T4.cor);

printf("Digite o numero de tropas do territorio 4: \n");
scanf("%d", &T4.tropas);


// Territorio 5
printf("Digite o nome do territorio 5: \n");
scanf("%s", &T5.nome);

printf("Digite a cor do territorio 5: \n");
scanf("%s", &T5.cor);

printf("Digite o numero de tropas do territorio 5: \n");
scanf("%d", &T5.tropas);


// Exibição dos territorios

printf("Territorio 1: Nome:  %s Idade: %s Média: %d", T1.nome, T1.cor, T1.tropas);

printf("Territorio 2: Nome:  %s Idade: %s Média: %d", T2.nome, T2.cor, T2.tropas);

printf("Territorio 3: Nome:  %s Idade: %s Média: %d", T3.nome, T3.cor, T3.tropas);

printf("Territorio 4: Nome:  %s Idade: %s Média: %d", T4.nome, T4.cor, T4.tropas);

printf("Territorio 5: Nome:  %s Idade: %s Média: %d", T5.nome, T5.cor, T5.tropas);

return 0;

}
