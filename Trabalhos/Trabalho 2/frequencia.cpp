#include <stdio.h>
int main()
{
    int n = 0, c = 0, qtd_numeros = 1, i = 0, j = 0, k = -1;
    bool achou = false;
    double num;

    do
    {
        printf("N = ");
        scanf("%d", &n);
    } while (n <= 0);
    putchar('\n');

    double v[n], cont[n];

    k = -1;
    for (i = 0; i < n; i++)
    {
        printf("V = ");
        scanf("%lf", &num);
        achou = false;
        j = 0;

        while (achou == false && j <= k)
        {
            if (v[j] == num)
            {
                achou = true;
                cont[j] = cont[j] + 1;
                printf("v[%d] == %.1lf\n", j, num);
            }
            else
            {
                j = j + 1;
            }
        }

        if (achou == false)
        {
            k = k + 1;
            v[k] = num;
            cont[k] = 1;
        }
    }

    for (j = 0; j <= k; j++)
    {
        printf("%.1lf apareceu %.1lf\n", v[j], cont[j]);
    }
}
