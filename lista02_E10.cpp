#include <stdio.h>
#include <math.h>
int main()
{
    float n;

    printf("Digite um valor pra N: ");
    scanf("%f", &n);



    if (n<0)
        printf("%.2f", pow(n,2));

    else
        printf("%.2f", sqrt(n));



}
