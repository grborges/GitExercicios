//Parte 2 combustivel

#include <stdio.h>

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
        
        printf("\tRazões entre os desempenhos dos diferentes combustíveis.\n\n");
        
        razaoCEtanolGasolina = cmEtanol / cmGasolina;
        razaoCEtanolGnv = cmEtanol / cmGnv;
        razaoCGnvGasolina = cmGnv / cmGasolina;

        printf("A razão entre o desempenho do etanol e da gasolina é de %.2f%%.\n", razaoCEtanolGasolina);
        printf("A razão entre o desempenho do etanol e do GNV é de %.2f%%.\n", razaoCEtanolGnv);
        printf("A razão entre o desempenho do GNV e da gasolina é de %.2f%%.\n", razaoCGnvGasolina);

        //razoes de valor

        printf("\tRazões entre os valores dos diferentes combustíveis.\n\n");

        razaoVEtanolGasolina = valorEtanol / valorGasolina;
        razaoVEtanolGnv = valorEtanol / valorGnv;
        razaoVGnvGasolina = valorEtanol / valorGasolina;

        printf("A razão entre o valor do etanol e da gasolina é de %.0f%%.\n", razaoVEtanolGasolina);
        printf("A razão entre o valor do etanol e do GNV é de %.2f%%.\n", razaoVEtanolGnv);
        printf("A razão entre o valor do GNV e da gasolina é de %.2f%%.\n", razaoVGnvGasolina);

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
    
        razaoCEtanolGasolina = cmEtanol / cmGasolina; //razão entre consumo medio com etanol e com gasolina
        printf("O desempenho com etanol é aproximadamente %.2f%% do desempenho com gasolina.\n", razaoCEtanolGasolina * 100);
    
        razaoVEtanolGasolina = valorEtanol / valorGasolina; //razão entre o valor do etanol e da gasolina
    
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
