#include <stdio.h>
#include <ctype.h>
#include <string.h>

const int TAM = 100;

char* gera_titulo(char frase[], int tamanho_frase);

int main(){

char palavra_sem_titulo[TAM];
char* frase_titulo;
int tam_frase;

    puts("Digite a frase: ");
    gets(palavra_sem_titulo);

    tam_frase = strlen(palavra_sem_titulo);
    strlwr(palavra_sem_titulo);

    frase_titulo = gera_titulo(palavra_sem_titulo, tam_frase);

    printf("Palavra com titulo: %s", frase_titulo);


}

char* gera_titulo(char frase[], int tamanho_frase){

    for(int i=0; i<tamanho_frase; i++){
        frase[0] = toupper(frase[0]);

        if(frase[i]==' '){
           frase[i+1] = toupper(frase[i+1]);
        }

    }

    return frase;

}


