#include <stdio.h>
int main()
{
    int mes;

    printf("Digite o numero correspondente ao mes: ");
    scanf("%d", &mes);

    switch (mes)
    {

    case 1:
        puts("Janeiro");
        break;
    case 2:
        puts("Fevereiro");
        break;
    case 3:
        puts("Marco");
        break;
    case 4:
        puts("Abril");
        break;
    case 5:
        puts("Maio");
        break;
    case 6:
        puts("junho");
        break;
    case 7:
        puts("Julho");
        break;
    case 8:
        puts("Agosto");
        break;
    case 9:
        puts("Setembro");
        break;
    case 10:
        puts("Outubro");
        break;
    case 11:
        puts("Novembro");
        break;
    case 12:
        puts("Dezembro");
        break;
    default:
        puts("Mes invalido");
        break;
    };
}
