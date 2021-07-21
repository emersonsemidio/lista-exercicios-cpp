#include <stdio.h>
int main(){

puts("Leia um numero real x e imprima seu valor arredondado. Por exemplo: se x = 3.2 imprimir 3, e se x= 3.5 ou maior imprimir 4.");

float x;
int a;

printf("Digite o valor de X: ");
scanf("%f", &x);

x = x + 0.5;

a = x;

printf("%d", a);

}
