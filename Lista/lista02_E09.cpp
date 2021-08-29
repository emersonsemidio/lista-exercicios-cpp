#include <stdio.h>
int main()
{
    const float DESCONTO = 0.8;
    int qtd_pecas;
    float valor_peca, valor_total, valor_desconto;

    printf("Quantidade de pecas: ");
    scanf("%d", &qtd_pecas);

    printf("Valor de cada peca:R$");
    scanf("%f", &valor_peca);

    valor_total = qtd_pecas*valor_peca;

    if (valor_total>200)
    {
        valor_desconto = valor_total*DESCONTO;
        printf("O valor a ser pago e: R$%.2f", valor_desconto);

    }
    else
        printf("O valor a ser pago e: R$%.2f", valor_total);







}
