//Exercicio de Loops

#include <stdio.h>

int main()
{
    int i, cont = 0;
    
    for(i = 0; i <= 10000; i++){
        printf("Contagem de 0 a 10000: %i\n ", i);
    }
    for(i = -10000; i <= 10000; i++){
        printf("Contagem de -10000 a 10000: %i\n ", i);
    }
    for(i = 0; i <= 10000; i += 2){
        printf("Contagem de 0 a 10000 só com pares: %i\n ", i);
    }
    for(i = 1; i <= 10000; i += 2){
        printf("Contagem de 0 a 10000 só com ímpar: %i\n", i);
    }
    for(i = -100000; i <= 100000; i += 3){
        printf("Contagem de -100000 a 100000 de 3 em 3: %i\n ", i);
    }
    return 0;
}