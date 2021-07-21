#include <stdio.h>
int main()
{
    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    switch(nota)
    {


case 10:
case 9:
    puts("A");
    break;
case 8:
case 7:
    puts("B");
    break;
case 6:
case 5:
    puts("C");
    break;
case 4:
case 3:
case 2:
case 1:
    puts("D");
    break;
default:
    puts("Invalida");
    break;




    }


}
