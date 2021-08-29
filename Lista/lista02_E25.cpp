#include <stdio.h>
int main(){
int digito;

printf("Digite o ultimo digito da placa: ");
scanf("%d", &digito);

switch(digito){

case 0: printf("\nAbril");
break;

case 1: printf("\nMaio");
break;

case 2: printf("\nJunho");
break;

case 3: printf("\nAgosto");
break;

case 4: printf("\nSetembro");
break;

case 5: printf("\nOutubro");
break;

case 6:
case 7:
    printf("\nNovembro");
    break;

case 8:
case 9:
    printf("\nDezembro");
default:
    printf("Digito invalido");
    break;
}
}

