#include <stdio.h>
int main(){
    int n=0, c=0, qtd_numeros=1, i = 0, j = 0, k = -1;
    bool achou = false;
    int v[n], cont[c], num;

    do{
        printf("N = ");
        scanf("%d", &n);
    }while(n<=0);
    putchar('\n');

    k = -1;
    for(i = 0; i < n; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &num);
        achou = false;
        j = 0;

        while (achou == false && j <= k) {
            if (v[j] == num) {
                achou = true;
                cont[j] = cont[j]+1;
                printf("v[%d] == %d\n", j, num);
            } else {
                j = j+1;
            }
        }

        if (achou == false) {

            k = k+1;
            v[k]= num;
            cont[k]=1;
            printf("achou == false. v[%d]=%d e cont[%d]=1\n",k, num, k);
        } else {
            printf("achou == true. v[%d]=%d e cont[%d]=1\n",k, num, k);
        }
    }

    for (j = 0; j<= k; j++) {
        printf("%d apareceu %d\n", v[j], cont[j]);
    }
}
