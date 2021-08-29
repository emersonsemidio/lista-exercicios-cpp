#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    float dist;

    printf("Digite a coordenada X1: ");
    scanf("%d", &x1);

    printf("Digite a coordenada Y1: ");
    scanf("%d", &y1);

    printf("P1(%d,%d)", x1, y1);

    printf("\nDigite a coordenada X2: ");
    scanf("%d", &x2);

    printf("Digite a coordenada Y2: ");
    scanf("%d", &y2);

    printf("P2(%d,%d)", x2, y2);

    dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("\nA distancia entre p1 e p2 e: %.2f", dist);
}
