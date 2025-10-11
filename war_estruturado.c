#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Criação do struct Territorio
typedef struct  {
    char nome[30];
    char cor[10];
    int tropas;
    char missao[50];
}Territorio; 



// Criação da função de ataque
void atacar(Territorio* atacante, Territorio* defensor);


// Criação da função de liberar memória
void liberarMemoria(Territorio* atacante, Territorio* defensor);


// Criação da função de atribuir missão
void atribuirMissao(char* destino, char* missoes[], int totalMissoes);

// Criação da função de exibir missão
void exibirMissao();

// Criação da função de checar missão
void verificarMissao(char* missao, Territorio* mapa, int tamanho);

 

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



// Vetor de Missões
char missoes[5][2] = {"1", "2", "3", "4", "5"};

// Vetor de Destino
char **destino;

destino = (char **)malloc(sizeof(char *));
if (destino == NULL) {
    // Tratar erro
    return 1;
}
destino[0] = (char *) malloc(50);
destino[0] = &T1.missao;
destino[1] = (char *) malloc(50);
destino[1] = T2.missao;
destino[2] = (char *) malloc(50);
destino[2] = &T3.missao;
destino[3] = (char *) malloc(50);
destino[3] = &T4.missao;
destino[4] = (char *) malloc(50);
destino[4] = &T5.missao;

//Váriavel numero de missões
int totalMissoes = 5;


// Função de atribuir missão
void atribuirMissao (destino, missoes, totalMissoes); {
    int i;
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        strcpy(destino[i], missoes[rand() % totalMissoes]);
    };
};

// Função de exibir missão
void exibirMissao (); {
    int i;
    for (i = 0; i < 5; i++) {
        int numeroMissao = atoi(destino[i]);
        switch (numeroMissao)
        {
        case 1:
            printf("\nTerritório número %d, sua missão é 1 - Vencer 3 batalhas seguidas\n", i+1);
            break;
        case 2:
            printf("\nTerritório número %d, sua missão é 2 - Vencer 3 batalhas como azarão\n", i+1);
            break;
        case 3:
            printf("\nTerritório número %d, sua missão é 3 - Conquistar 3 territórios\n", i+1);
            break;
        case 4:
            printf("\nTerritório número %d, sua missão é 4 - Não ser conquistado em 3 rodadas\n", i+1);
            break;
        case 5:
            printf("\nTerritório número %d, sua missão é 5 - Vencer 5 batalhas\n", i+1);
            break;
        };
    };
};




// Exibição dos territorios

printf("\nTerritorio 1: \nNome:  %s \nIdade: %s \nTropas: %d\n", T1.nome, T1.cor, T1.tropas);

printf("\nTerritorio 2: \nNome:  %s \nIdade: %s \nTropas: %d\n", T2.nome, T2.cor, T2.tropas);

printf("\nTerritorio 3: \nNome:  %s \nIdade: %s \nTropas: %d\n", T3.nome, T3.cor, T3.tropas);

printf("\nTerritorio 4: \nNome:  %s \nIdade: %s \nTropas: %d\n", T4.nome, T4.cor, T4.tropas);

printf("\nTerritorio 5: \nNome:  %s \nIdade: %s \nTropas: %d\n", T5.nome, T5.cor, T5.tropas);

// Definição de atacante e defensor

Territorio* atacante = (Territorio*)malloc(sizeof(Territorio));
if (atacante == NULL) return 1;
Territorio* defensor = (Territorio*)malloc(sizeof(Territorio));
if (defensor == NULL) return 1;

int escolhaAtacante;
int escolhaDefensor;

printf("\nEscolha o atacante:\n 1-%s\n 2-%s\n 3-%s\n 4-%s\n 5-%s\n" , T1.nome, T2.nome, T3.nome, T4.nome, T5.nome);
scanf("%d", &escolhaAtacante);

if (0 < escolhaAtacante < 6) {
    switch (escolhaAtacante) {
        case 1:
        atacante = &T1;
        break;
        case 2:
        atacante = &T2;
        break;
        case 3:
        atacante = &T3;
        break;
        case 4:
        atacante = &T4;
        break;
        case 5:
        atacante = &T5;
        break;
    };
} else {
    printf("escolha inválida. Reinicie.");
};

printf("Escolha o defensor:\n 1-%s\n 2-%s\n 3-%s\n 4-%s\n 5-%s\n" , T1.nome, T2.nome, T3.nome, T4.nome, T5.nome);
scanf("%d", &escolhaDefensor);

if (0 < escolhaDefensor < 6 && escolhaDefensor != escolhaAtacante) {
    switch (escolhaDefensor) {
        case 1:
        defensor = &T1;
        break;
        case 2:
        defensor = &T2;
        break;
        case 3:
        defensor = &T3;
        break;
        case 4:
        defensor = &T4;
        break;
        case 5:
        defensor = &T5;
        break;
    };
} else {
    printf("escolha inválida. Reinicie.");
};


// Função de ataque
void atacar(atacante, defensor); {
    srand(time(0));
    int randomNum = rand() % 7;
    int randomNum2 = rand() % 7;
    if (atacante->tropas * randomNum > defensor->tropas * randomNum2) {
        strcpy(defensor->cor, atacante->cor);
        defensor->tropas = atacante->tropas / 2;
        atacante->tropas = atacante->tropas / 2;
    } else {
        atacante->tropas = atacante->tropas / 2;
    };
};




// Exibição dos territorios atualizados

printf("\nTerritorio 1: \nNome:  %s \nIdade: %s \nTropas: %d\n", T1.nome, T1.cor, T1.tropas);

printf("\nTerritorio 2: \nNome:  %s \nIdade: %s \nTropas: %d\n", T2.nome, T2.cor, T2.tropas);

printf("\nTerritorio 3: \nNome:  %s \nIdade: %s \nTropas: %d\n", T3.nome, T3.cor, T3.tropas);

printf("\nTerritorio 4: \nNome:  %s \nIdade: %s \nTropas: %d\n", T4.nome, T4.cor, T4.tropas);

printf("\nTerritorio 5: \nNome:  %s \nIdade: %s \nTropas: %d\n", T5.nome, T5.cor, T5.tropas);



// Função de verificar missão
int condição;
void verificarMissao(missoes, atacante, condição); {
    int missaoAtacante = atoi(atacante->missao);
    int i;
    for (i = 0; i < 5; i++) {
        int numeroMissao = atoi(missoes[i]);
        if (numeroMissao == missaoAtacante) {
            // Abaixo, digite a condição de vitória da missão (no caso, tropas atacantes terem conquistado tropas defensoras)
            if (atacante->tropas == T1.tropas) {
            condição = 1;
            };
            if (condição == 1) {
            printf("\n\n\nParabéns território %s, você ganhou!\n\n\n", atacante->nome);
            } else {
            printf("n\n\nNenhum vencedor nesta rodada.\n\n\n");
            };
        };
    }; 
};



// Função de liberação de memória
void liberarMemoria(atacante, defensor); {
    atacante = NULL;
    free(atacante);
    defensor = NULL;
    free(defensor);
};


return 0;

}
