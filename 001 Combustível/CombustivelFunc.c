//Combustivel com funções

#include <stdio.h>

float myRazao(float valorMenor, float valorMaior);

int main()
{
    float cmGasolina, cmEtanol, cmGnv, razaoCEtanolGasolina, razaoCGnvGasolina, razaoCEtanolGnv, valorGasolina, valorEtanol, valorGnv, razaoVEtanolGasolina, razaoVGnvGasolina, razaoVEtanolGnv;
    int GnvConfirm;



    printf("Seu carro pode usar GNV?\n 1 para sim e 2 para não.\n");
    scanf("%i", &GnvConfirm);

    switch(GnvConfirm) {

        case 1:
        
        //Inputs

        printf("\tLevantamento de dados.\n\n");

        printf("Digite o consumo médio de gasolina do seu carro em km/l: ");
        scanf("%f", &cmGasolina);
    
        printf("Digite o consumo médio de etanol do seu carro em km/l: ");
        scanf("%f", &cmEtanol);

        printf("Digite o consumo médio de GNV do seu carro em quilômetros por metro cúbico: ");
        scanf("%f", &cmGnv);
    
        printf("Digite o valor da gasolina: ");
        scanf("%f", &valorGasolina);
    
        printf("Digite o valor do etanol: ");
        scanf("%f", &valorEtanol);

        printf("Digite o valor do etanol: ");
        scanf("%f", &valorGnv);

        //razoes de comsumo medio
        
        printf("\n\tRazões entre os desempenhos dos diferentes combustíveis.\n\n");
        
        razaoCEtanolGasolina = myRazao(cmEtanol, cmGasolina);
        razaoCEtanolGnv = myRazao(cmEtanol, cmGnv);
        razaoCGnvGasolina = myRazao(cmGnv, cmGasolina);

        printf("A razão entre o desempenho do etanol e da gasolina é de %.2f%%.\n", razaoCEtanolGasolina * 100);
        printf("A razão entre o desempenho do etanol e do GNV é de %.2f%%.\n", razaoCEtanolGnv * 100);
        printf("A razão entre o desempenho do GNV e da gasolina é de %.2f%%.\n", razaoCGnvGasolina * 100);

        //razoes de valor

        printf("\n\tRazões entre os valores dos diferentes combustíveis.\n\n");

        razaoVEtanolGasolina = myRazao(valorEtanol, valorGasolina);
        razaoVEtanolGnv = myRazao(valorEtanol, valorGnv);
        razaoVGnvGasolina = myRazao(valorGnv, valorGasolina);

        printf("A razão entre o valor do etanol e da gasolina é de %.2f%%.\n", razaoVEtanolGasolina * 100);
        printf("A razão entre o valor do etanol e do GNV é de %.2f%%.\n", razaoVEtanolGnv * 100);
        printf("A razão entre o valor do GNV e da gasolina é de %.2f%%.\n", razaoVGnvGasolina * 100);

        if(razaoCEtanolGasolina > razaoCEtanolGnv && razaoCEtanolGasolina > razaoCGnvGasolina){
            if(razaoVEtanolGasolina > razaoCEtanolGasolina){
                printf("O valor do etanol é igual a %.2f%% do valor da gasolina.\nLogo, vale a pena comprar gasolina.", razaoVEtanolGasolina * 100);
            }
            else{
                printf("O valor do etanol é igual a %.2f%% do valor da gasolina.\nLogo, vale a pena comprar etanol.", razaoVEtanolGasolina * 100);
            }
            
        }
        else{
            if(razaoVGnvGasolina > razaoCGnvGasolina){
                printf("O valor do GNV é igual a %.2f%% do valor da gasolina.\nLogo, vale a pena comprar gasolina.", razaoVGnvGasolina * 100);
            }
            else{
                printf("O valor do GNV é igual a %.2f%% do valor da gasolina.\nLogo, vale a pena comprar GNV.", razaoVGnvGasolina * 100);
            }
    
        }
        

        break;

        case 2:
        //inputs

        printf("\tLevantamento de dados.\n\n");

        printf("Digite o consumo médio de gasolina do seu carro em km/l: ");
        scanf("%f", &cmGasolina);
    
        printf("Digite o consumo médio de etanol do seu carro em km/l: ");
        scanf("%f", &cmEtanol);
    
        printf("Digite o valor da gasolina: ");
        scanf("%f", &valorGasolina);
    
        printf("Digite o valor do etanol: ");
        scanf("%f", &valorEtanol);
    
        razaoCEtanolGasolina = myRazao(cmEtanol, cmGasolina); //razão entre consumo medio com etanol e com gasolina
        printf("O desempenho com etanol é aproximadamente %.2f%% do desempenho com gasolina.\n", razaoCEtanolGasolina * 100);
    
        razaoVEtanolGasolina = myRazao(valorEtanol, valorGasolina); //razão entre o valor do etanol e da gasolina
    
        if(razaoVEtanolGasolina > razaoCEtanolGasolina){
            printf("O valor do etanol é igual a %.2f%% do valor da gasolina.\nLogo, vale a pena comprar gasolina.", razaoVEtanolGasolina * 100);
        }
        else{
            printf("O valor do etanol é igual a %.2f%% do valor da gasolina.\nLogo, vale a pena comprar etanol.", razaoVEtanolGasolina * 100);
        }

        break;

        default:
            printf("Resposta inválida...\n");
    }

    return 0;

}

float myRazao(float valorMenor, float valorMaior)
{
    
    return (valorMenor / valorMaior);
    
}
