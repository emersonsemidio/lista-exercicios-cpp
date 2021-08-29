#include <stdio.h>
int main()
{


float salario, financiamento;

printf("Digite o seu salario:R$");
scanf("%f", &salario);

printf("Digite o financiamento pretendido:R$");
scanf("%f", &financiamento);


    if(financiamento<=5*salario)
    {
        puts("Financiamento concedido");
    }
    else
        puts("Financiamento negado");

}
