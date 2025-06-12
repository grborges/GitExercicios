// Ordenamento de Strings

#include <stdio.h>
#include <string.h>

int main()
{
    // Strings a serem ordenadas
    char strings[10][100] = {
        "banana",
        "abacaxi",
        "laranja",
        "uva",
        "morango",
        "kiwi",
        "manga",
        "pera",
        "caju",
        "goiaba"

    };
    int len = 10; // Tamanho do array de strings

    char temp[100]; // Variável temporária para troca

    for(int i = 0; i < len - 1; i++)
    {
        int minJ = i; // Índice do menor elemento

        // Encontra o menor elemento na parte não ordenada
        for ( int j = i + 1; j < len; j++)
            if(strcmp(strings[j], strings[minJ]) < 0)
                minJ = j;

        // Se o menor elemento não é o atual, troca as strings
        if(minJ != i) 
        {
        strcpy(temp, strings[i]);
        strcpy(strings[i], strings[minJ]);
        strcpy(strings[minJ], temp);
        }
    }

    for(int i = 0; i < len; i++)
        printf("%s\n", strings[i]);
    
    printf("\n");
    
    return 0;
}
