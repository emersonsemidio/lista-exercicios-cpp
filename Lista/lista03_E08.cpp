#include<stdio.h>
int main(){
    int valores, cont=0, contnot=0;
for(int i=1;i<11;i++){
    printf("Digite o %d valor: ", i);
    scanf("%d", &valores);
    if(valores>9 && valores<21)
        cont++;
    else
        contnot++;
}
printf("Sao %d valores no intervalo", cont);
printf("\nSao %d valores fora do intervalo", contnot);
}
