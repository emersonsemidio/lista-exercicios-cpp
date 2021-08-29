#include <stdio.h>
int main()
{

    float b, h, c;

    puts("Leia a base e a altura de um triangulo, calcule e imprima sua area");

    printf("Digite a base do triangulo: ");
    scanf("%f", &b);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &h);

    c = (float)(b * h / 2);

    printf("%.2f", c);
}
