#include <stdio.h>
int main(){
    int n=0, c=0, qtd_numeros=1, i = 0, j = 0, k = -1;
    bool achou = false;
    double v[n], cont[c], num;

    do{
        printf("N = ");
        scanf("%d", &n);
    }while(n<=0);
    putchar('\n');

    for( i=0;i<n;i++){
        printf("V = ");
        scanf("%lf", &num);
        j = 0;
        achou = false;

        while (achou == false && j < i) {
            if (v[j] == num) {
                achou = true;
                cont[j]++;
            } else {
                j++;
            }
        }

        if (achou == false) {
            k++;
            v[k] = num;
            cont[k]=1;
        }
    }


    for(i=0;i<k;i++){
        printf("%.1f apareceu %.1f vezes\n", v[i], cont[i]);
    }



}
