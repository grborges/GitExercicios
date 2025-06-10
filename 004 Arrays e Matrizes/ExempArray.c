#include <stdio.h>

void inicializarArray(int k, int array[])
{

    for(int i = 0; i < k; i++ )
        array[i] = 1;
    
    
}

int somaArray(int k, int array[])
{
    int retorno = 0;
    
    for(int i = 0; i < k; i++)
        retorno += array[i];
}

int main()
{
    int myArray[10];
    
    inicializarArray(10, myArray);
    
    printf("Tamanho = %li bytes.\n", sizeof(myArray));
    
    for(int i = 0; i < 10; i++)
        printf("%i\n", myArray[i]);

    printf("Soma = %i.\n", somaArray(10, myArray));
    
    return 0;
}