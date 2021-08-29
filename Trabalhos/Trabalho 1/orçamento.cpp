#include <stdio.h>
#include <math.h>
int main(){
int local_obra, quantidade_profissionais[4], quantidade_dias[4], tipo_acabamento, num_parcelas,
forma_pagamento;
float area, valor_obra_bruta, valor_profissionais[5], valor_mao_obra, valor_acabamento, valor_orcamento, pag_a_vista, valor_desc_a_vista, mensalidade,
valor_tot_parcelado;

printf("Area em metros quadrados: ");
scanf("%f", &area);

//Obra Bruta

do{
printf("Digite 1 para obra em apartamento e 2 para obra em casa: ");
scanf("%d", &local_obra);
    if(local_obra!=1 && local_obra!=2)
        puts("\nDigite um valor valido");
}while(local_obra!=1 && local_obra!=2);

if(local_obra==1)
    valor_obra_bruta=area*1600;
else
    valor_obra_bruta=area*1300;

//Mao de Obra

printf("Precisa de pedreiro? 1 para SIM e 0 para NAO: ");
scanf("%d", &quantidade_profissionais[0]);

if(quantidade_profissionais[0] == 1){//Pedreiro
printf("Quantidade de dias de trabalho: ");
scanf("%d", &quantidade_dias[0]);
}

printf("Precisa de eletricista? 1 para SIM e 0 para NAO: ");
scanf("%d", &quantidade_profissionais[1]);

if(quantidade_profissionais[1] == 1){//Eletricista
printf("Quantidade de dias de trabalho: ");
scanf("%d", &quantidade_dias[1]);
}

printf("Precisa de encanador? 1 para SIM e 0 para NAO: ");
scanf("%d", &quantidade_profissionais[2]);

if(quantidade_profissionais[2] == 1){//Encanador
printf("Quantidade de dias de trabalho: ");
scanf("%d", &quantidade_dias[2]);
}

printf("Precisa de pintor? 1 para SIM e 0 para NAO: ");
scanf("%d", &quantidade_profissionais[3]);

if(quantidade_profissionais[3] == 1){//Pintor
printf("Quantidade de dias de trabalho: ");
scanf("%d", &quantidade_dias[3]);
}

valor_profissionais[0] = quantidade_profissionais[0]*quantidade_dias[0]*110; //Pedreiro
valor_profissionais[1] = quantidade_profissionais[1]*quantidade_dias[1]*130; //Eletricista
valor_profissionais[2] = quantidade_profissionais[2]*quantidade_dias[2]*140; //Encanador
valor_profissionais[3] = quantidade_profissionais[3]*quantidade_dias[3]*120; //Pintor
valor_profissionais[4] = quantidade_profissionais[0]*quantidade_dias[0]*50 + quantidade_profissionais[1]*quantidade_dias[1]*50 + quantidade_profissionais[2]*quantidade_dias[2]*50
+ quantidade_profissionais[3]*quantidade_dias[3]*50; //Ajudante

valor_mao_obra=valor_profissionais[0] + valor_profissionais[1] + valor_profissionais[2] + valor_profissionais[3] + valor_profissionais[4];

//Acabamento

do{
puts("\n1 para acabamento do tipo A");
puts("2 para acabamento do tipo B");
puts("3 para acabamento do tipo C");

printf("\nEscolha o tipo de acabamento: ");
scanf("%d", &tipo_acabamento);

    if(tipo_acabamento!=1 && tipo_acabamento!=2 && tipo_acabamento!=3)
    puts("\nDigite um valor valido");

}while(tipo_acabamento!=1 && tipo_acabamento!=2 && tipo_acabamento!=3);

switch(tipo_acabamento){
    case 1: valor_acabamento=area*950;
            break;
    case 2: valor_acabamento=area*720;
            break;
    default: valor_acabamento=area*450;
            break;

}

valor_orcamento = valor_obra_bruta + valor_mao_obra + valor_acabamento;


printf("\nValor total de pedreiro: R$%.2f", valor_profissionais[0]);

printf("\nValor total de eletricista: R$%.2f", valor_profissionais[1]);

printf("\nValor total de encanador: R$%.2f", valor_profissionais[2]);

printf("\nValor total de pintor: R$%.2f", valor_profissionais[3]);

printf("\nValor total de ajudante: R$%.2f", valor_profissionais[4]);


printf("\nValor total da obra: R$%.2f", valor_obra_bruta);

printf("\nValor total do acabamento: R$%.2f", valor_acabamento);

printf("\nValor total do orcamento: R$%.2f", valor_orcamento);




//Forma de pagamento
do{
    puts("\n\nDigite 1 para pagamento a vista");

    puts("Digite 2 para pagamento parcelado");

    printf("Escolha a forma de pagamento: ");
    scanf("%d", &forma_pagamento);

    if(forma_pagamento!=1 && forma_pagamento!=2)
        puts("\nDigite um valor valido");
}while(forma_pagamento!=1 && forma_pagamento!=2);


if(forma_pagamento==1){//PAGAMENTO A VISTA

    pag_a_vista = valor_orcamento*0.85;
    valor_desc_a_vista = valor_orcamento*0.15;

    printf("Desconto total: R$%.2f", valor_desc_a_vista);
    printf("\nO valor do pagamento e: R$%.2f", pag_a_vista);

}
else{
    printf("Digite o numero de parcelas: ");//PAGAMENTO PARCELADO
    scanf("%d", &num_parcelas);

    printf("Numero de parcelas: %d", num_parcelas);
    mensalidade = (valor_orcamento * pow(1.12,(num_parcelas/12.0)))/num_parcelas;
    printf("\nValor das mensalidades: R$%.2f", mensalidade);

    valor_tot_parcelado = mensalidade*num_parcelas;
    printf("\nValor total de todas as parcelas: R$%.2f", valor_tot_parcelado);
}




}
