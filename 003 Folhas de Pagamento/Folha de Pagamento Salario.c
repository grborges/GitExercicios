/******************************************************************************

Contas do salário(Colaborador)

*******************************************************************************/
#include <stdio.h>

int main()
{
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

    return 0;
}
