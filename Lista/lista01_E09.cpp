#include <stdio.h>
#include <math.h>
int main()
{
    float r, h, vc;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);

    vc = 3.14 * pow(r, 2) * h;

    printf("O volume do cilindro e: %.2f", vc);
}
