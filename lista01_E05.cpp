#include <stdio.h>
int main()

{
    puts("Leia a quantidade de bytes de um arquivo e a velocidade de transmissao em bytes por segundo e");
    puts("imprimir quantos segundos serao necessarios para fazer o download do arquivo.");

    float b, v, t;

    printf("\nDigite o tamanho do arquivos em bytes ");
    scanf("%f", &b);

    printf("\nDigite a velocidade de transmissao em bytes/s ");
    scanf("%f", &v);

    t = (float)b/v;

    printf("\nO tempo de download sao %.1f segundos: ", t);





}
