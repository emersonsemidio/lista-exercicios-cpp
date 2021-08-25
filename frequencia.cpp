#include <stdio.h>
int main(){
    int n=0, c=0, qtd_numeros=1;
    double v[n], cont[c];

    do{
        printf("N = ");
        scanf("%d", &n);
    }while(n<=0);
    putchar('\n');

    for(int i=0;i<n;i++){
        printf("V = ");
        scanf("%lf", &v[i]);
    }

    for(int i=0;i<n;i++){

        for(int j=0; j<n; j++){
            qtd_numeros = 1;
            if(v[i]!=v[j]){
                cont[c] = qtd_numeros;
            }
            if(v[i]==v[j]){
                qtd_numeros = qtd_numeros + 1;
            }
            if(j==n-1){
                c++;
            }
        }


    }

    for(int i=0;i<n;i++){
        printf("%f %f vezes\n", v[i], cont[i]);
    }



}
