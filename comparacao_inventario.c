#include <stdio.h>

int main() {

    // Declaração de váriaveis
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    unsigned int estoqueminA = 500;
    unsigned int estoqueminB = 1000;

    float valorA = 10.50;
    float valorB = 20.40;

    double valortotalA;
    double valortotalB;

    int resultadoA, resultadoB;

    // Exibição de informações
    printf("Produto %s tem estoque %u e valor unitário R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e valor unitário R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparações com valor mínimo de estoque
    resultadoA = estoqueA > estoqueminA;
    resultadoB = estoqueB > estoqueminB;

    printf("O Produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O Produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    // Comparações entre valores totais dos produtos
    printf("O valor total de A (R$%.2f) é maior que o valor total de B (R$%.2f): %d\n", valorA * estoqueA, estoqueB * valorB, (valorA * estoqueA) > (valorB * estoqueB));



    return 0;
    
}
