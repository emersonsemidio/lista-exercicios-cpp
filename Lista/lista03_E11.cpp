#include <stdio.h>

int main()
{
    int n, m, n1, m1;
    printf("N =");
    scanf("%d", &n);
    printf("M =");
    scanf("%d", &m);
    if (n > m)
    {
        m1 = n;
        n1 = m;
        m = m1;
        n = n1;
    }
    puts("Os impares no intervalo sao: ");
    for (n; n <= m; n++)
    {
        if (n % 2 == 1)
        {
            printf("%d\n", n);
        }
    }
}
