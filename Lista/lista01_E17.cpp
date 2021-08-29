#include <stdio.h>
int main()
{
    puts("Leia dois inteiros x e y e imprima o maior multiplo de x menor ou igual a y. Exemplo: se x = 9 e y = 38, entao o resultado e 36.");

    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    while (x <= y)
    {
        x = x + x;

        printf("%d", x);
    }
}
