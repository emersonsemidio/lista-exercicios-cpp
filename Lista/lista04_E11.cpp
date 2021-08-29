#include<stdio.h>
int main(){
    const int TAM_VETOR=5;
    int v[TAM_VETOR], w[TAM_VETOR], k[TAM_VETOR*2], i, j=1, l=0;

    for(i=0;i<5;i++){
        printf("V = ");
        scanf("%d", &v[i]);
    }
    printf("\n");

    for(i=0;i<5;i++){
        printf("W = ");
        scanf("%d", &w[i]);
    }

    for(i=0;i<10;i++){
        k[l] = v[i];
        k[j] = w[i];
        l+=2;
        j+=2;
    }
    for(i=0;i<10;i++){
        if(i==0){
            puts("Os valores de K sao: ");
        }
        printf("%d\n", k[i]);
    }

}
