#include <stdio.h>
int main(){
    int valores, cont =0;
for(int i = 1; i<11; i++){
    printf("Digite o %d valor: ", i);
    scanf("%d", &valores);
    if((valores%3==0 || valores%5==0) && valores%2!=0)
        cont ++;
}
printf("%d", cont);

}
