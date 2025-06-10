//Parte 1 combustivel

#include <stdio.h>

int main()
{
    float valorEtanol, valorGasolina, razao;
    
    printf("Digite o valor da gasolina: ");
    scanf("%f", &valorGasolina);
    
    printf("Digite o valor do etanol: ");
    scanf("%f", &valorEtanol);

    razao = valorEtanol / valorGasolina;
    
    if(razao > 0.7) {
        printf("O valor do etanol é aproximadamente %.0f%% do valor da gasolina.\nLogo, não vale a pena comprar etanol.\n", razao * 100);
    }
    else{
        printf("O valor do etanol é aproximadamente %.0f%% do valor da gasolina.\nLogo, vale a pena comprar etanol.\n", razao * 100);
    }
    
    return 0;
}