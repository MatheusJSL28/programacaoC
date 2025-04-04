#include <stdio.h>

int main() {

    int nota1, nota2, nota3, media;

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\n");
    printf("Média das notas: %d\n", media);
    printf("\n");

    return 0;
    
}
