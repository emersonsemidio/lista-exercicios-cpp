#include <stdio.h>

int main()
{
    puts("Calcule e imprima o n-esimo termo an de uma PA de razao r. Para isso, seu programa devera ler o 1o termo a1, a quantidade n de termos e a razao r. Considere: an = a1 + (n-1).r, onde n e natural.");

    float a1, r, an;
    unsigned int n;

    printf("Digite o primeiro termo da PA: ");
    scanf("%f", &a1);

    printf("Digite a razao da PA: ");
    scanf("%f", &r);

    printf("Digite a quantidade de termos da PA: ");
    scanf("%d", &n);

    an = a1 + (n - 1) * r;

    printf("O enesimo termo da PA e %.2f", an);
}
