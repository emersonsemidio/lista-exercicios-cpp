#include <stdio.h>
int main ()
{
    puts("Leia um numero inteiro n e informe se ele e ou nao divisivel por 6.");

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n%6==0)
    {
        puts("O numero e divisivel por 6");


    }
    else
    {
        puts("O numero nao e divisivel por 6");
    }


}
