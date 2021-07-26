#include <stdio.h>
int main(){
float peso, altura;
while(peso!=0){
do{
printf("Digite a altura em metros: ");
scanf("%f", &altura);
if(altura<0)
    puts("altura invalida");
}while(altura<0);
do{
printf("Digite o peso em metros: ");
scanf("%f", &peso);
if(peso<0)
    puts("peso invalido");
}while(peso<0);

float imc = peso/(altura * altura);

if(imc<=20)
    puts("Abaixo do Peso");
else if(imc>20 && imc<26)
    puts("Normal");
else if(imc>25 && imc<31)
    puts("Excesso de Peso");
else if(imc>31 && imc<36)
    puts("Obesidade");
else
    puts("obesidade morbida");

}



}
