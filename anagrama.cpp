#include <stdio.h>
#include <string.h>
int main(){
    const int TAM_PALAVRA = 100;
    char palavra1[TAM_PALAVRA], palavra2[TAM_PALAVRA];
    char palavra1SemEspaco[TAM_PALAVRA], palavra2SemEspaco[TAM_PALAVRA];
    int tam_palavra1, tam_palavra2, nulo=0, cont=0, j=0;

    printf("Digite a primeira palavra: ");
    gets(palavra1);

    printf("Digite a segunda palavra: ");
    gets(palavra2);

    strlwr(palavra1);
    strlwr(palavra2);

    tam_palavra1 = strlen(palavra1);
    tam_palavra2 = strlen(palavra2);

    for(int i = 0, j =0; i < tam_palavra1; i++) {
        if (palavra1[i] != ' ') {
            palavra1SemEspaco[j] = palavra1[i];
            j++;
        }
    }

    for(int i = 0, j =0; i < tam_palavra2; i++) {
        if (palavra2[i] != ' ') {
            palavra2SemEspaco[j] = palavra2[i];
            j++;
        }
    }

    printf("%s %d\n", palavra1SemEspaco, strlen(palavra1SemEspaco));
    printf("%s %d\n", palavra2SemEspaco, strlen(palavra2SemEspaco));

    tam_palavra1 = strlen(palavra1SemEspaco);
    tam_palavra2 = strlen(palavra2SemEspaco);

    if(tam_palavra1 == tam_palavra2){
        for(int i=0;i<tam_palavra1;i++){//nesse for aninhado, mantenho o indice atual do primeiro for para comparar com todos os indices da segunda palavra, 1 a 1.
            for(int j=0;j<tam_palavra2;j++){
                if(palavra1SemEspaco[i]==palavra2SemEspaco[j]){
                    palavra2SemEspaco[j] = nulo; //transformando o caracterer em questão em um valor nulo, já que já foi usado
                    cont = cont + 1; //contar a quantidade de vezes que o caracter foi encontrado e comparar com o tamanho da palavra e verificar se é um anagrama.
                    break; //caracterer do indice I ja foi encontrado, então faz uma quebra para passar para o proximo indice


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
