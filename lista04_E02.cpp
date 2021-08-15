#include <stdio.h>
int main(){
int i=0, v[10];

for(i; i<10; i++){
    printf("V = ");
    scanf("%d", &v[i]);
}
i=9;

for(i;i>-1;i--){//atribuindo valor i igual ao ultimo indice do vetor, fazer o loop ate o indice 0 e decrementando de 1 em 1
    if(v[i]%2==0)
        printf("%d\n", v[i]);
}


}
