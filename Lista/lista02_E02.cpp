#include <stdio.h>
int main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n % 3 ==0 && n % 7 ==0)

        puts("O numero e divisivel por 3 e por 7");


    else
        puts("O numero nao e divisivel por 3 e por 7");


}
