#include <stdio.h>
int main()
{

    float c, f;

    puts("Leia uma temperatura em graus Celsius e converta-a em graus Fahrenheit");



    printf("Digite o valor em graus celsius: ");
    scanf("%f", &c);

     f = 32 + (212-32.0)/100 * c;

    printf("A temperatura e %.2f F", f );

}
