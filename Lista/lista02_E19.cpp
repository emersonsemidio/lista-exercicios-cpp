#include <stdio.h>
int main()
{
    int ano_atual, ano_nascimento, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;

    if (idade >= 61)
        puts("idoso");

    else
    {
        if (idade >= 0 && idade <= 3)
        {
            puts("Bebe");
        }
        else if (idade >= 4 && idade <= 10)
        {
            puts("Crianca");
        }
        else if (idade >= 11 && idade <= 18)
        {
            puts("Adolescente");
        }
        else if (idade >= 19 && idade <= 60)
        {
            puts("Adulto");
        }
    }
}
