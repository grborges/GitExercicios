//Exemplo RU

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void histograma(int valor);

int main()     
{
    int respostas[20];
    int notas[6] = {0, 0, 0, 0, 0, 0};
    
    srand(time(NULL));
    
    printf("\t\t\nNotas Dadas:\n\n");
    
    for(int i = 0; i <= 20; i++){
        respostas[i] = rand() % 6;
        notas[respostas[i]]++;
        printf("%i ", respostas[i]);
        
    }
    
    printf("\t\t\n\n\nHistograma das Notas:\n\n");
    
    printf("\nA nota 0 foi dada %i vezes.\n", notas[0]);
    histograma(notas[0]);
    
    printf("A nota 1 foi dada %i vezes.\n", notas[1]);
    histograma(notas[1]);
    
    printf("A nota 2 foi dada %i vezes.\n", notas[2]);
    histograma(notas[2]);
    
    printf("A nota 3 foi dada %i vezes.\n", notas[3]);
    histograma(notas[3]);
    
    printf("A nota 4 foi dada %i vezes.\n", notas[4]);
    histograma(notas[4]);
    
    printf("A nota 5 foi dada %i vezes.\n", notas[5]);
    histograma(notas[5]);
    
    
    return 0;
}

void histograma(int valor){
    
    for(int i = 0; i < valor * 5; i++){
        printf("_");
    }
    printf("\n\n");
}