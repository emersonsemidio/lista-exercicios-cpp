#include <stdio.h>
#include <ctype.h>
#include <string.h>

const int TAM = 100;

void gera_titulo(char frase[], int tamanho_frase);

int main(){

char palavra_sem_titulo[TAM];
int tam_frase;

    puts("Digite a frase: ");
    gets(palavra_sem_titulo);

    tam_frase = strlen(palavra_sem_titulo);


    gera_titulo(palavra_sem_titulo, tam_frase);


}

void gera_titulo(char frase[], int tamanho_frase){

    for(int i=0; i<tamanho_frase; i++){
        frase[0] = toupper(frase[0]);

        if(frase[i]==' '){
           frase[i+1] = toupper(frase[i+1]);
        }

        printf("%c", frase[i]);

    }

}


