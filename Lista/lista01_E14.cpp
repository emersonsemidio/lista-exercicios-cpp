#include <stdio.h>
int main()
{
    puts("Leia a e b e calcule a equa��o do 1o grau ax + b = 0, imprimindo o valor de x. Considere a diferente de zero.");

    float a, b, x;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    while (a == 0)
    {
        printf("Voce digitou um valor invalido!, tente novamente\n ");
        printf("Digite o valor de a: ");
        scanf("%f", &a);
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    x = -b / a;

    printf("O valor de x na equacao ax + b = 0 eh: %.2f", x);
}
