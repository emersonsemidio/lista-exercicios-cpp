#include <stdio.h>
int main()
{
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n == 5 || n == 200 || n == 400 || n >= 500 && n <= 1000)
        puts("Ele obedece a pelo menos uma das condicoes");

    else
        puts("Nao obedece nenhuma das condicoes");
}
