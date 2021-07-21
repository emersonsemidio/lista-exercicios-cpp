#include <stdio.h>
int main ()
{
    puts("Leia o comprimento e a largura de um terreno retangular, alem do preco do metro quadrado de grama. Depois, calcule e imprima:");

    puts("a) A area a ser coberta de grama.\nb) O custo total de grama para gramar o terreno.");

    float com, lar, pre, ar, preme;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &com);

    printf("Digite a largura do terreno: ");
    scanf("%f", &lar);

    printf("Digite o preco do metro quadrado: ");
    scanf("%f", &pre);

    ar = com * lar;

    preme = pre * ar;

    printf("area total do terreno: %.2f", ar);

    printf("\npreco total para cobrir R$%.2f ", preme);
}
