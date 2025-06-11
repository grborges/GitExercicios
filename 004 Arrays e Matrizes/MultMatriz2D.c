#include <stdio.h>

int main()
{


    int matrixA[2][3] = {{1, 2, 2}, {3, 2, 4}};
    int colsA = 3;
    int matrixB[3][2] = {{4, 1}, {1, 2}, {2, 3}};
    int rowsB = 3;
    int resultMatrix[2][2] = {{0,0}, {0,0}};

    if(colsA == rowsB){
        

        for(int i = 0; i < 2; ++i ){
            for(int j = 0; j < 3; ++j){
                for(int k = 1; k < 3; ++k){
                    resultMatrix[i][j] = resultMatrix[i][j] + matrixA[i][k] * matrixB[k][j];
                }
            }
        }
    

    for(int i = 0; i < 2; ++i){  
        for(int j = 0; j < 2; ++j){
            printf("%i\t", resultMatrix[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("Matrizes incompativeis.\n");
}   
    
    return 0;
}
