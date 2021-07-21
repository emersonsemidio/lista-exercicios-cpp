#include <stdio.h>
int main()
{
    float h, altura;
    int idade;

    printf("Digite a altura em metros: ");
    scanf("%f", &h);


    printf("Digite a idade: ");
    scanf("%d", &idade);


    if(h>=1.8 && idade<18)
        {puts("\nSelecionado");}

    else
        {puts("\nNao selecionado");}




}
