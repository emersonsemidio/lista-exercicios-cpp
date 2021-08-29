#include <stdio.h>
int main(){
    const int TAM_VETOR=5;
    int v[TAM_VETOR], w[TAM_VETOR], k[TAM_VETOR*2], i;

    for(i=0;i<TAM_VETOR;i++){
        printf("V = ");
        scanf("%d", &v[i]);
    }

    for(i=0;i<TAM_VETOR;i++){
        printf("W = ");
        scanf("%d", &w[i]);
    }

    for(i=0;i<TAM_VETOR*2;i++){
        if(i<=4){
            k[i] = v[i];
        }
        else{
            k[i] = w[i-5];
        }
    }

    for(i=0;i<TAM_VETOR*2;i++){
        if(i==0){
            puts("Os valores de K sao: ");
        }
        printf("%d\n", k[i]);
    }
}
