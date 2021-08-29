
#include <stdio.h>
const int N=3;
int main(){
    bool achou;
    int m[N][N], i, j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("Indice[%d][%d] ", i, j);
            scanf("%d", &m[i][j]);
        }
    }



    for(i=0;i<N;i++){
        for(j=0;j<N;j++){

            if(j==N-1){
                continue;//Quando chegar na ultima linha, pular a etapa de comparação
            }

            if(m[i][j]%2==0 && m[i][j] != m[i][j+1] &&(m[i][j]>0 && m[i][j]<=2*N))
                achou = true;

            else if(m[i][j]>2*N){//Se o valor for maior de 2*N receberá falso
                achou=false;

            }
            else if(m[i][j]==m[i][j+1]){
                achou = false;//Se o valor da linha atual for igual a próxima, receberá falso

            }

        if(achou==false)
            break;//Se for falso, para o loop
        }

        if(achou==false)
            break;//Se for falso, para o loop
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){

            if(j==N-1)
                continue;

            if(m[i][j]%2==0 && (m[j][i] != m[j+1][i]) && (m[j][i]>0 && m[j][i]<=2*N)){
                achou = true;
            }
            else if(m[j][i]>2*N){//Se o valor for maior que 2*N, receberá falso
                achou=false;

            }

            else if(m[j][i]==m[j+1][i]){//Se o valor atual for igual ao próximo da coluna, receberá falso
                achou = false;
            }

            if(achou==false)
                break;//Se for falso, quebra o loop
        }

        if(achou==false)
            break;//Se for falso, quebra o loop

    }

    if(achou==true){
        printf("E um quadrado latino par");
    }
    else{
        printf("Nao e um quadrado latino par");
    }


}
