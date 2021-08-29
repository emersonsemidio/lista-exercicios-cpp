#include <stdio.h>
int main(){
int horas_trabalhadas;
float salario1, salario2;

do{
printf("Horas trabalhadas: ");
scanf("%d", &horas_trabalhadas);

if(horas_trabalhadas<0)
    puts("Digite um valor valido");
}while(horas_trabalhadas<0);

if(horas_trabalhadas<=40){
    salario1 = 15*horas_trabalhadas;
    printf("Salario semanal e: R$%.2f", salario1);
}
else{
    salario2 = 600 + 21*(horas_trabalhadas-40);
    printf("Salario semanal e: R$%.2f", salario2);
}
}
