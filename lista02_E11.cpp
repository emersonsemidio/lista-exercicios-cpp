#include <stdio.h>
#include <math.h>
int main()
{
    int n, a, b;

    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%d", &n);


    while (n <1000)
    {

        puts("Erro digite novamente");
        printf("Digite um numero inteiro de 4 digitos: ");
        scanf("%d", &n);

    }
a = n/100;
b = n%100;


    if ((pow(a+b,2)) == n)
        {
            puts("Ele possui a caracteristica");
        }
    else
        {
            puts("Ele nao possui a caracteristica");
    }






}
