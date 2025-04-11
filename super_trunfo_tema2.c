#include <stdio.h>

int main() {

    // Declaração de variáveis
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;
    char estado1[04], estado2[04], codigo1[04], codigo2[04], nomecidade1[50], nomecidade2[50];


    // Entrada de dados da primeira cidade
    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    // Cálculo da Densidade Populacional e PIB per capita da Carta 1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1 * 1000000000;

    // Exibição da Carta 1
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("\n");



    // Entrada de dados da segunda cidade
    printf("Digite o segundo estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da segunda cidade: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", &nomecidade2);

    printf("Digite a segunda população: \n");
    scanf("%d", &populacao2);

    printf("Digite a segunda área: \n");
    scanf("%f", &area2);

    printf("Digite o segundo PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o segundo número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // Cálculo da Densidade Populacional e PIB per capita da Carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2 * 1000000000;
    
    // Exibição da Carta 2
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("\n");


    // Menu interativo
    int opcao, opcao2; 
    int resultado = 4;
    int resultado2 = 4;
    double soma1, soma2;

    printf("Escolha uma opção de atributo:\n");
    printf("1. Nome do País\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade Demográfica\n");
    printf("\n");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
        printf("Escolha uma segunda opção de atributo:\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade Demográfica\n");
        printf("\n");
        scanf("%d", &opcao2);
        printf("\n");
        break;
        case 2:
        printf("Escolha uma segunda opção de atributo:\n");
        printf("1. Nome do País\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade Demográfica\n");
        printf("\n");
        scanf("%d", &opcao2);
        printf("\n");
        break;
        case 3:
        printf("Escolha uma segunda opção de atributo:\n");
        printf("1. Nome do País\n");
        printf("2. População\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade Demográfica\n");
        printf("\n");
        scanf("%d", &opcao2);
        printf("\n");
        break;
        case 4:
        printf("Escolha uma segunda opção de atributo:\n");
        printf("1. Nome do País\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade Demográfica\n");
        printf("\n");
        scanf("%d", &opcao2);
        printf("\n");
        break;
        case 5:
        printf("Escolha uma segunda opção de atributo:\n");
        printf("1. Nome do País\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("6. Densidade Demográfica\n");
        printf("\n");
        scanf("%d", &opcao2);
        printf("\n");
        break;
        case 6:
        printf("Escolha uma segunda opção de atributo:\n");
        printf("1. Nome dos País\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("\n");
        scanf("%d", &opcao2);
        printf("\n");
        break;
        default:
            printf("Opção inválida\n");
    }
    

    // Comparações  e somas de Atributos
    switch (opcao) {
        case 1:
        printf("\n");
        printf("Carta 1                                    Carta 2\n");
        printf("Estado: %s                                  Estado: %s\n", estado1, estado2);
        printf("Código: %s                                Código: %s\n", codigo1, codigo2);
        printf("Nome da Cidade: %s                       Nome da Cidade: %s\n", nomecidade1, nomecidade2);
        printf("População: %d                              População: %d\n", populacao1, populacao2);
        printf("Área: %.2f km²                            Área: %.2f km²\n", area1, area2);
        printf("PIB: %.2f bilhões de reais                PIB: %.2f bilhões de reais\n", pib1, pib2);
        printf("Número de Pontos Turísticos: %d            Número de Pontos Turísticos: %d\n", pontosturisticos1, pontosturisticos2);
        printf("Densidade Populacional: %.2f hab/km²       Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2);
        printf("PIB per capita: %.2f reais        PIB per capita: %.2f reais\n", pibpercapita1, pibpercapita2);
        printf("\n");
        break;
        case 2:
            soma1 += populacao1;
            soma2 += populacao2;
            if (populacao1 > populacao2) {
                resultado = 1;
            } else if (populacao1 == populacao2) {
                resultado = 3;
            } else {
                resultado = 0;
            }
        break;
        case 3:
            soma1 += area1;
            soma2 += area2;
            if (area1 > area2) {
                resultado = 1;
            } else if (area1 == area2) {
                resultado = 3;
            } else {
                resultado = 0;
            }
        break;
        case 4:
            soma1 += pib1;
            soma2 += pib2;
            if (pib1 > pib2) {
                resultado = 1;
            } else if (pib1 == pib2) {
                resultado = 3;
            } else {
                resultado = 0;
            }
        break;
        case 5:
            soma1 += pontosturisticos1;
            soma2 += pontosturisticos2;
            if (pontosturisticos1 > pontosturisticos2) {
                resultado = 1;
            } else if (pontosturisticos1 == pontosturisticos2) {
                resultado = 3;
            } else {
                resultado = 0;
            }
        break;
        case 6:
            soma1 += (1 / densidadepopulacional1);
            soma2 += (1 / densidadepopulacional2);
            if ((1 / densidadepopulacional1) > (1 / densidadepopulacional2)) {
                resultado = 1;
            } else if (densidadepopulacional1 == densidadepopulacional2) {
                resultado = 3;
            } else if ((1 / densidadepopulacional2) > (1 / densidadepopulacional1)){
                resultado = 0;
            }
        break;
        default:
            printf("\n");
    }

    switch (opcao2) {
        case 1:
            if (opcao == 1) {
                printf("\n");
            } else {
                printf("\n");
                printf("Carta 1                                    Carta 2\n");
                printf("Estado: %s                                  Estado: %s\n", estado1, estado2);
                printf("Código: %s                                Código: %s\n", codigo1, codigo2);
                printf("Nome da Cidade: %s                       Nome da Cidade: %s\n", nomecidade1, nomecidade2);
                printf("População: %d                              População: %d\n", populacao1, populacao2);
                printf("Área: %.2f km²                            Área: %.2f km²\n", area1, area2);
                printf("PIB: %.2f bilhões de reais                PIB: %.2f bilhões de reais\n", pib1, pib2);
                printf("Número de Pontos Turísticos: %d            Número de Pontos Turísticos: %d\n", pontosturisticos1, pontosturisticos2);
                printf("Densidade Populacional: %.2f hab/km²       Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2);
                printf("PIB per capita: %.2f reais        PIB per capita: %.2f reais\n", pibpercapita1, pibpercapita2);
                printf("\n");
            }
        break;
        case 2:
            soma1 += populacao1;
            soma2 += populacao2;
            if (populacao1 > populacao2) {
                resultado2 = 1;
            } else if (populacao1 == populacao2) {
                resultado2 = 3;
            } else {
                resultado2 = 0;
            }
        break;
        case 3:
            soma1 += area1;
            soma2 += area2;
            if (area1 > area2) {
                resultado2 = 1;
            } else if (area1 == area2) {
                resultado2 = 3;
            } else {
                resultado2 = 0;
            }
        break;
        case 4:
            soma1 += pib1;
            soma2 += pib2;
            if (pib1 > pib2) {
                resultado2 = 1;
            } else if (pib1 == pib2) {
                resultado2 = 3;
            } else {
                resultado2 = 0;
            }
        break;
        case 5:
            soma1 += pontosturisticos1;
            soma2 += pontosturisticos2;
            if (pontosturisticos1 > pontosturisticos2) {
                resultado2 = 1;
            } else if (pontosturisticos1 == pontosturisticos2) {
                resultado2 = 3;
            } else {
                resultado2 = 0;
            }
        break;
        case 6:
            soma1 += (1 / densidadepopulacional1);
            soma2 += (1 / densidadepopulacional2);
            if ((1 / densidadepopulacional1) > (1 / densidadepopulacional2)) {
                resultado2 = 1;
            } else if (densidadepopulacional1 == densidadepopulacional2) {
                resultado2 = 3;
            } else if ((1 / densidadepopulacional2) > (1 / densidadepopulacional1)){
                resultado2 = 0;
            }
        break;
        default:
        printf("Opção inválida\n");
    }
    

    // Exibição dos Resultados
    printf("\n");
    printf("Comparação das cartas:\n");
    printf("\n");
    printf("Carta 1: %s  VS  Carta 2: %s\n", nomecidade1, nomecidade2);
    
    switch (opcao) {
        case 1:
        printf("Sem resultado\n");
        break;
        case 2:
        printf("Atributo escolhido: População\n");
        break;
        case 3:
        printf("Atributo escolhido: Área\n");
        break;
        case 4:
        printf("Atributo escolhido: PIB\n");
        break;
        case 5:
        printf("Atributo escolhido: Números de pontos turísticos\n");
        break;
        case 6:
        printf("Atributo escolhido: Densidade Demográfica\n");
        break;
        default:
        printf("Sem resultado\n");
    }

    switch (opcao) {
        case 1:
        printf("Sem resultado\n");
        break;
        case 2:
        printf("Carta 1: %d  Carta 2: %d\n", populacao1, populacao2);
        break;
        case 3:
        printf("Carta 1: %.2f km² Carta 2: %.2f km²\n", area1, area2);
        break;
        case 4:
        printf("Carta 1: %.2f bilhões de reais Carta 2: %.2f bilhões de reais\n", pib1, pib2);
        break;
        case 5:
        printf("Carta 1: %d  Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        break;
        case 6:
        printf("Carta 1: %.2f hab/km² Carta 2: %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2);
        break;
        default:
        printf("Sem resultado\n");
    }

    switch (opcao2) {
        case 1:
        printf("Sem resultado\n");
        break;
        case 2:
        printf("Segundo atributo escolhido: População\n");
        break;
        case 3:
        printf("Segundo atributo escolhido: Área\n");
        break;
        case 4:
        printf("Segundo atributo escolhido: PIB\n");
        break;
        case 5:
        printf("Segundo atributo escolhido: Números de pontos turísticos\n");
        break;
        case 6:
        printf("Segundo atributo escolhido: Densidade Demográfica\n");
        break;
        default:
        printf("Sem resultado\n");
    }

    switch (opcao2) {
        case 1:
        printf("Sem resultado\n");
        break;
        case 2:
        printf("Carta 1: %d  Carta 2: %d\n", populacao1, populacao2);
        break;
        case 3:
        printf("Carta 1: %.2f km² Carta 2: %.2f km²\n", area1, area2);
        break;
        case 4:
        printf("Carta 1: %.2f bilhões de reais Carta 2: %.2f bilhões de reais\n", pib1, pib2);
        break;
        case 5:
        printf("Carta 1: %d  Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        break;
        case 6:
        printf("Carta 1: %.2f hab/km² Carta 2: %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2);
        break;
        default:
        printf("Sem resultado\n");
    }

    if (opcao == opcao2 || opcao == 1 || opcao2 == 1 || opcao > 6 || opcao2 > 6 || opcao < 0 || opcao2 < 0)
    {
        printf("Impossível determinar um vencedor. Você deve escolher dois atributos válidos diferentes para continuar o jogo (2, 3, 4, 5 ou 6). Reinicie o programa.\n");
        printf("\n");
    } else {
        printf("Soma dos atributos da Carta 1: %.2f    Soma dos atributos da Carta 2: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Resultado: Carta 1 venceu!\n");
            printf("\n");
        } else if (soma1 == soma2) {
            printf("Resultado: Empate!\n");
            printf("\n");
        } else if (soma1 < soma2) {
            printf("Resultado: Carta 2 venceu!\n");
            printf("\n");
        } else {
            printf("Sem resultado.\n");
            printf("\n");
        }
    }
    
    
    printf("\n");
    
    return 0;
    
}
