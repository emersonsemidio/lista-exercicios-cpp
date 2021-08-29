#include <stdio.h>
int main()
{

    int forma_pagamento;
    const float DESC1 = 0.9, DESC2 = 0.95, DESC3 = 1, DESC4 = 1.1;
    float preco, parcelas3, parcelas4, vt1, vt2, vt3, vt4;

    printf("Preco do produto:R$");
    scanf("%f", &preco);

    do
    {

        printf(" \n Digite 1 para pagamento a vista, dinheiro ou cheque\n Digite 2 para pagamento a vista, cartao de credito\n Digite 3 para parcelar em 2x\n Digite 4 para parcelar em 3x\n");
        scanf("%d", &forma_pagamento);

    } while (forma_pagamento > 5 || forma_pagamento < 0);

    if (forma_pagamento == 1)
    {
        vt1 = preco * DESC1;
        printf("\nValor a pagar e: R$%.2f", vt1);
    }

    else if (forma_pagamento == 2)
    {
        vt2 = preco * DESC2;
        printf("\nValor a pagar e: R$%.2f", vt2);
    }
    else if (forma_pagamento == 3)
    {
        vt3 = preco * DESC3;
        printf("\nValor a pagar e: R$%.2f", vt3);
        parcelas3 = (preco * DESC3) / 2;
        printf("\nValor da parcela:R$%.2f", parcelas3);
    }

    else
    {
        vt4 = preco * DESC4;
        printf("\nValor a pagar e: R$%.2f", vt4);
        parcelas4 = (preco * DESC4) / 3;
        printf("\nValor da parcela:R$%.2f", parcelas4);
    }
}
