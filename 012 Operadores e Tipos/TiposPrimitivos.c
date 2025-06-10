//Tipos Primitivos

#include <stdio.h>

int main() 
{
    int var1 = 0; // int representa números inteiros, ocupa 2 bytes(16 bits)
    float var2 = 0; //float declara números racionais em casas decimais, ocupa 4 bytes(32 bits)
    double var3 = 0, resp = 0; //double também declara números racionais, porém com mais precisão que o float, ocupando 8 bytes(64 bits)
    char var4 = 'a'; // char declara caracteres, ocupa 1 byte(8 bits)
    void* var5 = 0;// void determina um valor vazio, ocupa 8 bytes(64 bits)
    
    var1 = 2;
    var2 = 3.5;
    var3 = 2.5321;
    
    resp = var1 * (var2 + var1) / var3; // expressão usando as variáveis
    
    printf("O resultado da expressão é: %f\n", resp);
    printf("O caracter da var4 é: %c\n", var4);
    printf("O print do void printa: %p\n", var5);
    
    return 0;

}