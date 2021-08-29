#include <stdio.h>
int main(){

puts("Leia 3 variaveis inteiras a, b e c e faça um rodizio entre elas. Ao final, a variavel b devera ter o valor da variavel a, a variavel c devera ter o valor da variavel b e a variavel a devera ter o valor davariavel c.");

int a, b, c, a1, b1, c1;

printf("Digite o valor de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf("%d", &b);

printf("Digite o valor de c: ");
scanf("%d", &c);

a1 = a;
b1 = b;
c1 = c;

b = a1;
c = b1;
a = c1;

printf("B = %d", b);
printf("\nC = %d", c);
printf("\nA = %d", a);




}
