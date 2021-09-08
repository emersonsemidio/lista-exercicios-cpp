#include <stdio.h>
int main()
{
    puts("Realize a convers�o de km para milhas, imprimindo o resultado da convers�o.");

    float km, mi;

    printf("Digite o valor em km: ");
    scanf("%f", &km);

    mi = km / 0.621371;

    printf("O valor em milhas e: %f", mi);
}
