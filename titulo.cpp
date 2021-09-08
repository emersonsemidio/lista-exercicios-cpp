#include <stdio.h>
#include <ctype.h>
#include <string.h>

const int TAM = 100;

bool verifica_excecao(char* palavra_verificada);
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

bool verifica_excecao(char* palavra_verificada){
    int tam_palavra_verifica, tamanho_excecao;
    const char excecao_1[] = "de";

    tamanho_excecao = strlen(excecao_1);
    tam_palavra_verifica = strlen(palavra_verificada);

    if(tam_palavra_verifica==tamanho_excecao){

        for(int i=0; i<tam_palavra_verifica;i++){
            if(palavra_verificada[i] != excecao_1[i])
                return true;
        }

        return false;
    }

    return true;

}

char* gera_titulo(char frase[], int tamanho_frase){
    char* palavra;
    char separador[] = " ";
    bool  is_titulo;



    char *ptr = strtok(frase, separador);

	while (ptr != NULL)

	{
	    palavra = ptr;
        //palavra[0] = toupper(palavra[0]);

		//printf("'%s'\n", ptr);
		ptr = strtok(NULL, separador);
		is_titulo = verifica_excecao(palavra);
		if(is_titulo==true){
            printf("Maiuscula %s \n", palavra);

		}
		else{
            printf("nao eh titulo %s\n", palavra);
		}
	}


//    for(int i=0; i<tamanho_frase; i++){
//        frase[0] = toupper(frase[0]);
//
//        if(frase[i]==' '){
//            strtok(frase, separador)
//            frase[i+1] = toupper(frase[i+1]);
//        }
//
//
//    }

    return frase;

}


