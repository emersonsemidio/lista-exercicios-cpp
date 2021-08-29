#include <stdio.h>
int main()
{
    for (float i = 1; i < 21; i++)
    {
        printf("%.0f Polegada = %.2f cm\n", i, i * 2.54);
    }
}
