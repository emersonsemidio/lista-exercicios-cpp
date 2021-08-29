#include <stdio.h>
int main(){
float temperatura, c, f;
int tipo_temperatura;

printf("Digite o valor da temperatura: ");
scanf("%f", &temperatura);

do{
printf("Digite 1 para Celsius e 2 para Fahrenheit: ");
scanf("%d", &tipo_temperatura);
}while(tipo_temperatura!=1 && tipo_temperatura!=2);

if(tipo_temperatura==1){
    f = 32 + (212-32.0)/100*temperatura;
    printf("A temperatura em F e: %.2fF", f);

}
else{
    c = (temperatura-32)*100/(212-32);
    printf("A temperatura em C e: %.2fC", c);
}

}
