#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long int loopContado(long long int x, long long int numLoops);

int main()
{
    clock_t tempo = 0.0; //var que conta tempo
    long long int resp = 0, nloops, x;
    
    tempo = clock(); // instante inicial
    
    printf("Digite o número de loops: ");
    scanf("%lli", &nloops);
    
    printf("Valor no fim do loop: %lld.\n", loopContado(x, nloops));
    
    tempo = clock() - tempo; // Acha o intervalo


    printf("Tempo de execução : %lf segundos.\n", (double)tempo / CLOCKS_PER_SEC ); // converte para segundos

    return 0;    
}

long long int loopContado(long long int x, long long int numLoops)
{
    long long int resp = 0;
    
    for(long long int x = 0; x <= numLoops; x++){
        resp += x;    
    }
    
    return resp;
}