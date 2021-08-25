#include <stdio.h>
int main(){
    int n=0, c=0, qtd_numeros=1, i = 0, j = 0;
    bool achou = false;
    double v[n], cont[c];

    do{
        printf("N = ");
        scanf("%d", &n);
    }while(n<=0);
    putchar('\n');

    for( i=0;i<n;i++){
        printf("V = ");
        scanf("%lf", &v[i]);
    }

    for( i=0;i<n;i++){
        printf("%lf ", v[i]);
    }
    printf("\n\n\n");

    for(i=0;i<n;i++){
        for( int tmp =0;tmp<n;tmp++){
            printf("[%d] %lf ", i, v[tmp]);
        }
        printf("\n\n");

        qtd_numeros = 0;
        achou = false;
        for (j = 0; j<n; j++) {
            if (v[j] == v[i]) {
                qtd_numeros++;
                cont[j] = qtd_numeros;
            }
        }

        for( int tmp =0;tmp<n;tmp++){
            printf("[%d] %lf ", i, v[tmp]);
        }
        printf("\n\n");
    }

    for( i=0;i<n;i++){
        printf("%lf ", v[i]);
    }
    printf("\n\n\n");

    for(i=0;i<n;i++){
        printf("%.1f apareceu %.1f vezes\n", v[i], cont[i]);
    }



}
