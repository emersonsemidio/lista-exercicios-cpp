#include <stdio.h>
int main(){
    const int TAM_VETOR=5;
    int v[5], w[5], k[10], i;

    for(i=0;i<=4;i++){
        printf("V = ");
        scanf("%d", &v[i]);
    }

    for(i=0;i<=4;i++){
        printf("W = ");
        scanf("%d", &w[i]);
    }

    for(i=0;i<=9;i++){
        if(i<=4){
            k[i] = v[i];
        }
        else{
            k[i] = w[i-5];
        }
    }

    for(i=0;i<=9;i++){
        if(i==0){
            puts("Os valores de K sao: ");
        }
        printf("%d\n", k[i]);
    }
}
