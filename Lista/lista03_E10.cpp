#include <stdio.h>
int main()
{
    int n, m, soma = 0;
    puts("M>N e N dif 0 e M dif 0");
    do
    {
        printf("N =");
        scanf("%d", &n);
        printf("M =");
        scanf("%d", &m);
    } while (n > m || (n == 0 || m == 0));
    for (n; n <= m; n++)
    {
        soma += n;
    }
    printf("\nO somatorio de n a m= %d", soma);
}
