#include <stdio.h>
int main(){
float n, h, somador, numerador, denominador;
int expoente, base;

printf("Digite o valor de N: ");
scanf("%f", &n);

for(int i = 1; i<=n; i++){
    numerador = i;
    base = n-i+1;
    expoente = i;

    denominador = 1;

for(int c=expoente; c>=1; c--){
    denominador *= base;
}


if(i%2==1){
    somador += numerador/denominador;
}
else{
    somador -= numerador/denominador;
}




}

printf("\nH = %f", somador);


}
