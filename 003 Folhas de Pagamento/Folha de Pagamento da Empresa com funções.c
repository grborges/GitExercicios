/*

Folha de Pagamento da Empresa

*/

#include <stdio.h>
#include <stdlib.h>

int confirmValeTransporte( int vtresp, float salBA);

float calculoTaxa(float valor, int taxa);

int main(){

    float salBA, ferias, FGTS, valealim, salBR, valetrans, insspat, decter, saldemi, feriastotal, lucro, IRPJ, saliquido, dectertotal;
    int vtresp, demiresp, diastrab, mesestrab;

 
    printf("\tFolha de Pagamento da Empresa.\n");

    printf("\n Digite o valor do lucro mensal apurado da empresa: ");
    scanf("%e", &lucro);

    printf("Digite o salário base do colaborador: ");
    scanf("%e", &salBA);

    printf("Digite o valor do vale alimentação do colaborador: ");
    scanf("%e", &valealim);

    printf("O colaborador aceitou vale transporte?\n(Digite 1 para sim e 2 para não): ");
    scanf("%i", &vtresp);

    valetrans = confirmValeTransporte(vtresp, salBA);

    printf("O valor do vale transporte é R$%.2f.\n", valetrans);

    //IRPJ

    IRPJ = calculoTaxa(lucro, 15);

    printf("\nO valor do IRPJ é %.2f.\n", IRPJ);

    //Salario bruto

    salBR = salBA + valealim + valetrans;

    printf("\nO salário bruto do colaborador será R$%.2f.\n", salBR);

    //Férias

    ferias = salBA / 12 + ((salBA / 3) / 12);

    printf("\n O valor a separar para as férias do funcionário é %.2f.\n", ferias);

    //Décimo terceiro

    decter = salBA / 12;

    printf("O valor a separar para o décimo terceiro sálario é %.2f.", decter);

    //INSS Patronal

    insspat = calculoTaxa(salBA, 20);

    printf("\n O valor do INSS patronal é %.2f.\n", insspat);

    //FGTS

    FGTS = calculoTaxa(salBA, 8);

    printf("\nA taxa de FGTS é equivalente a 8%% do salário do colaborador\n");

    //Valor total

    saliquido = salBR + FGTS + insspat + ferias + decter;

    printf("\nO valor total da reserva mensal para esse funcionário é %.2f.", saliquido);

      // Em caso de demissão

    printf("\nO funcionário foi demitido?\n(Digite 1 para sim e 2 para não): ");
    scanf("%i", &demiresp);

    if(demiresp == 1){

        printf("\n Digite o número de dias trabalhados no mês da demissão: ");
        scanf("%i", &diastrab);

        printf("\n Digite o número de meses trabalhados no ano da demissão: ");
        scanf("%i", &mesestrab);

        printf("\nAs seguintes despesas devem ser consideradas.\n");

        saldemi = salBA / diastrab;

        printf("\nO valor do salário de todos os dias trabalhados do mês da demissão, que, no caso, é igual a %.2f.", saldemi);

        feriastotal = salBA + (salBA / 3);

        printf("\nO valor das férias vencidas e proporcionais mais abono de férias, que, no caso, é igual a %.2f.", feriastotal);

        dectertotal = salBA / mesestrab;

        printf("\nO valor décimo terceiro salário proporcional, que, no caso, é igual a %.2f.",dectertotal);

    }
    else{
        printf("Então Ok.\n");
    }

    return 0;

}

int confirmValeTransporte( int vtresp, float salBA){
    
    if(vtresp == 1){
        return salBA * 6 / 100;

    }
    else{
        return 0;
    }

}

float calculoTaxa(float valor, int taxa) {

    return valor * taxa / 100;

}