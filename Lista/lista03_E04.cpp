#include <stdio.h>
int main()
{
    int i, cont;
    i = 1;
    cont = 1;
    for (i; cont < 31; i += 2)
    {
        cont++;
        printf("%d ", i);
    }
}
