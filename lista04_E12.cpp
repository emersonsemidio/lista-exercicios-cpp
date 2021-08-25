#include <stdio.h>
int main(){
    const int TAM_VETOR =10;
    int matricula[TAM_VETOR], i;
    float salario[TAM_VETOR];
    const float REAJUSTE = 1.08;


    for(i=0;i<10;i++){
        printf("Digite a matricula do %d funcionario: ", i+1);
        scanf("%d", &matricula[i]);

        printf("Digite o salario do %d funcionario R$", i+1);
        scanf("%f", &salario[i]);
        putchar('\n');
    }

    for(i=0;i<10;i++){
        printf("%d funcionario - matricula: %d - salario: R$%.2f", i+1,matricula[i], salario[i]*REAJUSTE);
        putchar('\n');
    }
}
