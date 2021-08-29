#include <stdio.h>
#include <math.h>
int main()
{
    float imc, p, h;

    puts("Faca um programa que leia a altura e o peso de uma pessoa e imprima seu imc na tela: ");

    printf("Digite a altura em metros: ");
    scanf("%f", &h);

    printf("Digite o peso em kg: ");
    scanf("%f", &p);


    imc = p/pow(h,2.0);

    printf("%.2f", imc);

}
