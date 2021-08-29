#include <stdio.h>
int main()
{
    float nota1, nota2, trabalho, media;
    int faltas;
    const int PESO1 = 3;
    const int PESO2 = 5;
    const int PESO_TRABALHO = 2;

    printf("Digite a nota da P1: ");
    scanf("%f", &nota1);

    while (nota1 > 10 || nota1 < 0)
    {
        puts("Nota invalida");
        printf("Digite a nota da P1: ");
        scanf("%f", &nota1);
    }

    printf("Digite a nota da P2: ");
    scanf("%f", &nota2);

    while (nota2 > 10 || nota2 < 0)
    {
        puts("Nota invalida");
        printf("Digite a nota da P2: ");
        scanf("%f", &nota2);
    }

    printf("Digite a nota do trabalho: ");
    scanf("%f", &trabalho);

    while (trabalho > 10 || trabalho < 0)
    {
        puts("nota invalida");
        printf("Digite a nota do trabalho: ");
        scanf("%f", &trabalho);
    }

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    media = (3 * nota1 + 5 * nota2 + 2 * trabalho) / 10;

    if (nota1 > 10 || nota2 > 10 || trabalho > 10)
        puts("Nota invalida");
    else
    {
        if (faltas > 15)
            puts("Reprovado por faltas");

        else
        {
            if (media >= 7)
                puts("Aprovado");
            else if (media < 4)
                puts("Reprovado");
            else
                puts("Prova final");
        }
    }
}
