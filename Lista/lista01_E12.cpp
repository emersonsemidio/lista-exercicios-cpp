#include <stdio.h>
int main()
{
    puts("Leia o comprimento e a largura de um terreno retangular, alem do preco do metro de arame farpado. Depois, calcule e imprima:");
    puts("a) A metragem de arame gasta para cercar o terreno, sabendo que o terreno sera cercado com 4 voltas de arame farpado.");
    puts("b) O custo total com o arame farpado.");

    float com, lar, pre, me, cus;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &com);

    printf("Digite a largura do terreno: ");
    scanf("%f", &lar);

    printf("Digite o preco do metro do arame: ");
    scanf("%f", &pre);

    me = 4 * (2 * com + 2 * lar);
    cus = me * pre;

    printf("A metragem e: %.2f", me);

    printf("\n O custo total e: R$%.2f", cus);
}
