#include <stdio.h>
int main()
{
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota > 10 || nota < 0)
        puts("Nota invalida");

    else
    {
        if (nota < 10 && nota >= 9)
            puts("A");

        else if (nota < 9 && nota >= 7)
            puts("B");

        else if (nota < 7 && nota >= 5)
            puts("C");

        else if (nota < 5)
            puts("D");
    }
}
