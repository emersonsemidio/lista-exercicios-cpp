#include <stdio.h>
int main()
{
    float a, b, c, maiornum, menornum;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if (a > b && a > c)
    {
        printf("O maior valor e %.2f\n", a);
    }
    if (b > a && b > c)
    {
        printf("O maior valor e %.2f\n", b);
    }
    if (c > a && c > b)
        ;
    {
        printf("O maior valor e %.2f\n", c);
    }
    if (a < b && a < c)
    {
        printf("O menor valor e %.2f", a);
    }
    if (b < a && b < c)
    {
        printf("O menor valor e %.2f ", b);
    }
    if (c < a && c < b)
    {
        printf("O menor valor e %.2f", c);
    }
}
