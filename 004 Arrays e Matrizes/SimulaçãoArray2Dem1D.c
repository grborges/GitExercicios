//Simula arrays 2D com arrays 1D

#include <stdio.h>

int main()
{
    int array2d[6];
    int matrix[3][2];
    int rows = 3, cols = 2, sum1 = 0, sum2 = 0;
    
    for(int i = 0; i < rows; i++)
       for(int j = 0; j < cols; j++)
            array2d[i * 3 + j] = j + i;
    
    for(int i = 0; i < rows; i++)
       for(int j = 0; j < cols; j++)
            sum1 += array2d[i * 3 + j];
            
    
    for(int i = 0; i < rows; i++)
       for(int j = 0; j < cols; j++)
            matrix[i][j] = j + i;
    
    for(int i = 0; i < rows; i++)
       for(int j = 0; j < cols; j++)
            sum2 += matrix[i][j];

    printf("Soma da matriz simulada = %i.\n", sum1);
    printf("Soma da matriz comum = %i.\n", sum2 );

    return 0;
}