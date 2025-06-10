//@brief Teste de matrizes multidimensionais

#include <stdio.h>

int main()
{
    int matriz [2][2][2][2][2][2][2][2][2][2][2][2]; // Começou a dar erro com 12 dimensões
    int soma = 0;

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            for(int k = 0; k < 2; k++)
                for(int l = 0; l < 2; l++)
                    for(int m = 0; m < 2; m++)
                        for(int n = 0; n < 2; n++)
                            for(int o = 0; o < 2; o++)
                                for(int p = 0; p < 2; p++)
                                    for(int q = 0; q < 2; q++)
                                        for(int r = 0; r < 2; r++)
                                            for(int s = 0; s < 2; s++)
                                                for(int t = 0; t < 2; t++){
                                                    matriz[i][j][k][l][m][n][o][p][q][r][s][t]++;
                                                    soma += matriz[i][j][k][l][m][n][o][p][q][r][s][t];
                                                }

    printf("Somatória = %i.\n", soma);

    return 0;

}