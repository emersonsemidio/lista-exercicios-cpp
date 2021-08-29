#include <stdio.h>
int main(){
int ano;
float peso;


do{
printf("Digite o ano de fabricacao: ");
scanf("%d", &ano);

if(ano<0)
    puts("Ano invalido");
}while(ano<0);
do{
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    if(peso<0)
    puts("Peso invalido");
}while(peso<0);

if(ano>=1980){
    if(peso<3600){
        puts("Classe 7");
        puts("Taxa de Registro 19,50");
    }
    else if(peso>=3600){
        puts("Classe 8");
        puts("Taxa de registro 52,50");
    }
}
else{
    if(ano<=1970){
        if(peso<1200){
            puts("Classe 1");
            printf("Taxa de registro 16,50");
        }
        else if(peso>=1200 && peso <=1700){
            puts("Classe 2");
            puts("Taxa de registro 25,50");
        }
        else if(peso>1700){
            puts("Classe 3");
            puts("Taxa de registro 46,50");
        }
    }
    else{
        if(peso<1200){
            puts("Classe 4");
            printf("Taxa de registro 27");
        }
        else if(peso>=1200 && peso <=1700){
            puts("Classe 5");
            puts("Taxa de registro 30,50");
        }
        else{
            puts("Classe 6");
            puts("Taxa de registro 52,50");

            }
            }

        }




    }





