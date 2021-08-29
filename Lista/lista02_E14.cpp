#include <stdio.h>
#include <math.h>
int main()
{
    float v, k, p, t;
    int n;

    printf("Digite o valor do financiamento: R$");
    scanf("%f", &v);

    printf("Digite o numero de prestacoes: ");
    scanf("%d", &n);

    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &k);

    t = (pow(1 + k, n) - 1) / (k * pow(k + 1, n));
    p = v / t;

    printf("O valor da prestacao e: R$%.2f", p);
}
