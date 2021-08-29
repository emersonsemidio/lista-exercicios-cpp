#include <stdio.h>
int main()
{
    printf("Leia 3 notas de um aluno e seus respectivos pesos. Depois, calcule e imprima a m�dia ponderada do aluno.\n");

    int a, b, c, n1, n2, n3;
    float pon;

    printf("primeira nota: ");
    scanf("%d", &n1);

    printf("segunda nota: ");
    scanf("%d", &n2);

    printf("terceira nota: ");
    scanf("%d", &n3);

    printf("peso da nota 1: ");
    scanf("%d", &a);

    printf("peso da nota 2: ");
    scanf("%d", &b);

    printf("peso da nota 3: ");
    scanf("%d", &c);

    pon = (n1 * a + n2 * b + n3 * c) / (a + b + c);

    printf("media final e: %f", pon);
}
