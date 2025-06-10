//Matriz

#include <stdio.h>
#include <time.h>

int main()
{
    int matrizLC[1000][200], matrizCL[1000][200]; // LC = linha/coluna e CL = coluna/linha
    clock_t tempo1 = 0.0, tempo2 = 0.0;
    long int somaLC = 0, somaCL = 0; 
    
    printf("Tamanho = %i bytes.\n", sizeof(matrizLC));

    printf("Tamanho = %i bytes.\n", sizeof(matrizCL));
    
    tempo1 = clock();
    
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 200; j++)
            matrizLC[i][j] = j;
        
    }    
    
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 200; j++)
           somaLC += matrizLC[i][j];
    }
    
    tempo1 = clock() - tempo1;

    tempo2 = clock();
    
    for(int k = 0; k < 200; k++){
        for(int l = 0; l < 1000; l++)
            matrizCL[k][l] = l;
        
    }    
    
    for(int k = 0; k < 200; k++){
        for(int l = 0; l < 1000; l++)
           somaCL += matrizCL[k][l];
    }
    
    tempo2 = clock() - tempo2;
    
    printf("Somatória (Linha e Coluna) = %li\n", somaLC);
    printf("Somatória (Coluna e Linha) = %li\n", somaCL);
    printf("Intervalo de %.5f segundos. (Linha e Coluna)\n", (double)tempo1 / CLOCKS_PER_SEC);
    printf("Intervalo de %.5f segundos. (Coluna e Linha)\n", (double)tempo2 / CLOCKS_PER_SEC);
    
    return 0;
}