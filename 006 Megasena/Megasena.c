/******************************************************************************

Megasena

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h> // Para usar o rand() e o srand() 
#include <time.h> // Para usar o time()

int main()
{
    int dezenas[6];
    int sorteio[6];
    int i, k = 0;
    
    printf("\t--------Simulador da Mega-sena--------\n");//Título
    
    srand(time(NULL)); // semente para gerar valores aleatorios
    
    //Coleta das dezenas
    
    printf("\nDigite dezenas de 1 a 60.\n\n");
    
    printf("Digite a primeira dezena: ");
    scanf("%i", &dezenas[0]);
    
    printf("Digite a segunda dezena: ");
    scanf("%i", &dezenas[1]);

    printf("Digite a terceira dezena: ");
    scanf("%i", &dezenas[2]);

    printf("Digite a quarta dezena: ");
    scanf("%i", &dezenas[3]);

    printf("Digite a quinta dezena: ");
    scanf("%i", &dezenas[4]);

    printf("Digite a sexta dezena: ");
    scanf("%i", &dezenas[5]);
    
    //Sorteio

    do{
    for(i = 0; i < 6; i++){
        sorteio[i] = rand() % 60 + 1; //Gera numeros de 1 a 60

        }

        k++;

    }while(dezenas[0] != sorteio[0] || dezenas[1] != sorteio[1] || dezenas[2] != sorteio[2] || dezenas[3] != sorteio[3] || dezenas[4] != sorteio[4] || dezenas[5] != sorteio[5]); // Compara os números
    
    printf("\n%i %i %i %i %i %i\n", sorteio[0], sorteio[1], sorteio[2], sorteio[3], sorteio[4], sorteio[5]);
    printf("Número de sorteios: %i", k);

    return 0;
}