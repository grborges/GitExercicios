/*

Folha de Pagamento da Empresa

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float salBA, ferias, FGTS, valealim, salBR, valetrans, insspat, decter, saldemi, feriastotal, lucro, IRPJ, saliquido, dectertotal, valdem;
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

    if(vtresp == 1){
        valetrans = salBA * 6 / 100;
        printf("O valor do vale transporte é R$%.2f.\n", valetrans);

    }
    else{
        valetrans = 0;
    }

    //IRPJ

    IRPJ = lucro * 15 / 100;

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

    insspat = salBA * 20 / 100;

    printf("\n O valor do INSS patronal é %.2f.\n", insspat);

    //FGTS

    FGTS = salBA * 8 / 100;

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
    
    }
/*

    float salariobase, salariobruto, auxalim, numdias, valorpass, valetrans, salbaseirpf, INSS, IRPF, saliquido, FGTS;
    
    printf("\tCálculo dos benefícios e descontos no salário\n");
    
    printf("\nDigite seu salário base: ");
    scanf("%f", &salariobase);
    
    printf("Digite o valor do seu auxílio alimentação: ");
    scanf("%f", &auxalim);
    
    printf("Digite o número de dias que você trabalha por mês: ");
    scanf("%f", &numdias);
    
    printf("Digite o valor da passagem de ônibus (ida e volta) na sua cidade: ");
    scanf("%f", &valorpass);
    
    valetrans = salariobase * 6 / 100;
    
    //Vale a pena aceitar o vale transporte?
    
    if(valorpass * numdias > valetrans){
        printf("\nVale a pena aceitar o vale transporte.\n");
        valetrans;
    }
    else{
        printf("\nNão vale a pena aceitar o vale transporte.\n");
        valetrans = 0;
    }
    
    //Salário base + auxílio alimentação + vale transporte
    
    salariobruto = salariobase + auxalim + valetrans;
    
    printf("\nSeu salário bruto é R$%.2f.\n", salariobruto);
    
    //IRPF
    
    salbaseirpf = salariobase + valetrans;
    
    if(salbaseirpf <= 0 || salbaseirpf <= 2428.80){
        IRPF = 0;
        printf("\nA aliquota do seu IRPF é 0%%.\n");
    }
    else if(salbaseirpf > 2428.80 && salbaseirpf <= 2826.65){
        IRPF = salbaseirpf * 7.5 / 100;
        printf("\nA aliquota do seu IRPF é 7,5%%.\n");
    }
    else if (salbaseirpf > 2826.65 && salbaseirpf <= 3751.05){
        IRPF = salbaseirpf * 15 / 100;
        printf("\nA aliquota do seu IRPF é 15%%.\n");
    }
    else if(salbaseirpf > 3751.05 && salbaseirpf <= 4664.68){
        IRPF = salbaseirpf * 22.5 / 100;
        printf("\nA aliquota do seu IRPF é 22.5%%.\n");
    }
    else{
        IRPF = salbaseirpf * 27.5 / 100;
        printf("\nA aliquota do seu IRPF é 27.5%%.\n");
    }
    
    //INSS
    
    if(salbaseirpf <= 0 || salbaseirpf <= 1518){
        INSS = salbaseirpf * 7.5 / 100;
        printf("\nA aliquota do seu INSS é 7.5%%.\n");
    }
    else if(salbaseirpf > 1518 && salbaseirpf <= 2793.88){
        INSS = salbaseirpf * 9 / 100;
        printf("\nA aliquota do seu INSS é 9%%.\n");
    }
    else if(salbaseirpf > 2793.88 && salbaseirpf <= 4190.83){
        INSS = salbaseirpf * 12 / 100;
        printf("\nA aliquota do seu INSS é 12%%.\n");
    }
    else{
        INSS = 8157.41 * 14 / 100;
        printf("\nA aliquota do INSS é 14%%.\n");
    }
    
    //FGTS
    
    FGTS = salariobruto * 8 / 100;
    
    printf("\nA taxa do FGTS é 8%% do seu salário bruto.\n");
    
    //Salário líquido
    
    saliquido = salariobruto - INSS - IRPF - FGTS;
    
    printf("\nSeu salário líquido é R$%.2f.\n", saliquido);

*/

return 0;

}