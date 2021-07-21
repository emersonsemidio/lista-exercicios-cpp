#include <stdio.h>
int main()
{
    float preco, percentual, vfinal;

    puts("Leia o valor de um produto e sua porcentagem de desconto e imprima o valor final na tela");

    printf("Digite o preco do produto em reais: ");
    scanf("%f", &preco);

    printf("Digite o valor percentual de desconto ");
    scanf("%f", &percentual);

    vfinal = preco*(percentual / 100);

    printf("O preco final e R$%.2f", vfinal);
}
