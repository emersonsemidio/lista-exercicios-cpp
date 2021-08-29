#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    double dp1p2, dp1p3, dp2p3, semiperimetro, area;

    printf("Digite a coordenada X1: ");
    scanf("%d", &x1);

    printf("Digite a coordenada Y1: ");
    scanf("%d", &y1);

    printf("P1(%d,%d)", x1,y1);

    printf("\nDigite a coordenada X2: ");
    scanf("%d", &x2);

    printf("Digite a coordenada Y2: ");
    scanf("%d", &y2);

    printf("P2(%d,%d)", x2, y2);

    printf("\nDigite a coordenada X3: ");
    scanf("%d", &x3);

    printf("Digite a coordenada Y3: ");
    scanf("%d", &y3);

    printf("P3(%d,%d)", x3,y3);

    dp1p2 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));

    dp1p3 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));

    dp2p3 = sqrt(pow(x2-x3,2) + pow(y2-y3,2));

    semiperimetro = (dp1p2 + dp1p3 + dp2p3)/2;


    if(dp1p2 <= dp1p3 + dp2p3 || dp1p3<=dp2p3 + dp1p3 || dp2p3<= dp1p3 + dp1p2)
        {printf("\nImpossivel formar um triangulo com esses lados");}

    else {

        printf("\nO perimetro e %.2f", semiperimetro*2);
        area = sqrt(semiperimetro*(semiperimetro-dp1p2)*(semiperimetro-dp1p3)*(semiperimetro-dp2p3));
        printf("\nArea mede %.2f", area);


    }

}
