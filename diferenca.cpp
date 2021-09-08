#include<stdio.h>

void le_vetor(int tam_vetor,int v1[], int v2[]);

int main(){
    int n;

    do{
    printf("N = ");
    scanf("%d", &n);
    }while(n<=0);

    int v1[n], v2[n];

    le_vetor(n, v1, v2);

    return 0;
}

void le_vetor(int tam_vetor, int v1_apelido[], int v2_apelido[]){
    for(int i=0;i<tam_vetor;i++){
        do{
            printf("v1[%d] = ", i);
            scanf("%d", &v1_apelido[i]);
        }while(v1_apelido[i]<=0);
    }

    for(int i=0;i<tam_vetor;i++){
        do{
            printf("v2[%d] = ", i);
            scanf("%d", &v2_apelido[i]);
        }while(v2_apelido[i]<=0);
    }

}
