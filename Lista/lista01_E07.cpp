#include <stdio.h>
#include <math.h>
int main()
{
    puts("Leia o raio de uma esfera, calcule e imprima seu volume");

    float ve, r;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    ve = 4.0 / 3 * pow(r, 3) * 3.14;

    printf("O volume e: %.2f", ve);
}
