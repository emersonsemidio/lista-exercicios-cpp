#include <stdio.h>


int main(){

int gols_time_A, gols_time_B, num_apostadores, gols_apostador_time_A, gols_apostador_time_B, cont_vit_empate,cont_gols_A, cont_gols_B, somatot;
cont_vit_empate=0, cont_gols_A =0, cont_gols_B= 0;
do{
    printf("Gols do primeiro time: ");
    scanf("%d", &gols_time_A);
    if (gols_time_A<0)
        printf("Digite um valor valido\n");
}while(gols_time_A<0);

do{
    printf("Gols do segundo time: ");
    scanf("%d", &gols_time_B);
    if (gols_time_B<0)
        printf("Digite um valor valido\n");
}while(gols_time_B<0);

printf("Placar do jogo (time A) %d x %d (time B)\n", gols_time_A, gols_time_B);

do{
   printf("Numero de apostadores: ");
   scanf("%d", &num_apostadores);
   if(num_apostadores<=0)
        puts("Digite um valor vailido");
}while(num_apostadores<=0);

for(int i=0;i<num_apostadores;i++){

    printf("%d Apostador\n", i+1);
    do{
    printf("Quantidade de gols do time A: ");
    scanf("%d", &gols_apostador_time_A);

    if(gols_apostador_time_A<0)
        puts("Digite um valor valido");
    }while(gols_apostador_time_A<0);

    do{
    printf("Quantidade de gols do time B: ");
    scanf("%d", &gols_apostador_time_B);

    if(gols_apostador_time_B<0)
        puts("Digite um valor valido");
    }while(gols_apostador_time_B<0);


    if((gols_time_A==gols_time_B && gols_apostador_time_A==gols_apostador_time_B) || (gols_time_A>gols_time_B && gols_apostador_time_A>gols_apostador_time_B) || (gols_time_A<gols_time_B && gols_apostador_time_A<gols_apostador_time_B)) {
        cont_vit_empate = 10; //Vitoria A, Empate ou Vitoria B
    }

    if(gols_time_A==gols_apostador_time_A) {
        cont_gols_A = 5; //Acertou gols time A
    }

    if(gols_time_B==gols_apostador_time_B) {
        cont_gols_B = 5; //Acertou gols time B

    }


    printf("\nPlacar do apostador (Time A) %d x %d (Time B)", gols_apostador_time_A, gols_apostador_time_B);
    somatot = cont_vit_empate + cont_gols_A + cont_gols_B;
    printf("\nPontuacao final de %d pontos\n", somatot);

    cont_gols_A=cont_gols_B=cont_vit_empate=0;
}

}
