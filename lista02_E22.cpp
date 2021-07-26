#include <stdio.h>
int main(){
int horas_trab;
float valor_hora, salario_bruto;
const float DESC1 = 1, DESC2 = 1-0.1, DESC3 = 1-0.15, DESC4 = 1-0.275;

do{
printf("Horas trabalhadas: ");
scanf("%d", &horas_trab);

if(horas_trab<0)
    puts("\nDigite um valor valido");
}while(horas_trab<0);

do{
    printf("Valor da hora de trabalho:R$");
scanf("%f", &valor_hora);

if(valor_hora<0)
    puts("\nDigite um valor valido");
}while(valor_hora<0);

salario_bruto=valor_hora*horas_trab;

if(salario_bruto<=1900){
    printf("Salario bruto e: R$%.2f", salario_bruto);
    printf("\nSalario liquido e: R$%.2f", salario_bruto*DESC1);
}
else if(salario_bruto>1900 && salario_bruto<=4300){
    printf("Salario bruto e: R$%.2f", salario_bruto);
    printf("\nSalario liquido e: R$%.2f", salario_bruto*DESC2);
}
else if(salario_bruto>4300 && salario_bruto<=5800){
    printf("Salario bruto e: R$%.2f", salario_bruto);
    printf("\nSalario liquido e: R$%.2f", salario_bruto*DESC3);
}
else{
    printf("Salario bruto e: R$%.2f", salario_bruto);
    printf("\nSalario liquido e: R$%.2f", salario_bruto*DESC4);
}











}
