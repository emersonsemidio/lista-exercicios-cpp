#include <stdio.h>
#include <string.h>
int main(){
    const int TAM_PALAVRA = 100;
    char palavra1[TAM_PALAVRA], palavra2[TAM_PALAVRA];
    int tam_palavra1, tam_palavra2, nulo=0, cont=0;

    printf("Digite a primeira palavra: ");
    gets(palavra1);

    printf("Digite a segunda palavra: ");
    gets(palavra2);

    strlwr(palavra1);
    strlwr(palavra2);

    tam_palavra1 = strlen(palavra1);
    tam_palavra2 = strlen(palavra2);

    if(tam_palavra1 == tam_palavra2){
        for(int i=0;i<tam_palavra1;i++){//nesse for aninhado, mantenho o indice atual do primeiro for para comparar com todos os indices da segunda palavra, 1 a 1.
            for(int j=0;j<tam_palavra2;j++){
                if(palavra1[i]==palavra2[j]){
                    palavra2[j] = nulo; //transformando o caracterer em quest�o em um valor nulo, j� que j� foi usado
                    cont = cont + 1; //contar a quantidade de vezes que o caracter foi encontrado e comparar com o tamanho da palavra e verificar se � um anagrama.
                    break; //caracterer do indice I ja foi encontrado, ent�o faz uma quebra para passar para o proximo indice


                }
            }
        }
    }

    if(cont == tam_palavra1){
        printf("As palavras sao anagramas");
    }
    else{
        printf("As palavras nao sao anagramas");
    }



}
