#include <stdio.h>
#include <math.h>
int main()
{

    int i = 0, v[10];

    for (i; i < 10; i++)
    {
        printf("V = ");
        scanf("%d", &v[i]);
    }
    i = 0;

    for (i; i < 10; i++)
    {
        printf("%.0f\n", pow(v[i], 2));
    }
}
