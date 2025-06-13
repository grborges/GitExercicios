// Funções de ctype e strings

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string1[50], string2[50];
    int len1, len2;

    printf("Digite uma string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Digite mais uma string(Pode ser igual a última): ");
    fgets(string2, sizeof(string2), stdin);

    len1 = strlen(string1);
    len2 = strlen(string2);

    printf("Suas strings em maiúsculo são: ");
    for(int i = 0; i < len1; i++)
    {
        printf("%c", toupper(string1[i]));
    }
    printf(" e ");
    for(int i = 0; i < len2; i++)
    {
        printf("%c", toupper(string2[i]));
    }
    printf("Suas strings em minúsculo são: ");
    for(int i = 0; i < len1; i++)
    {
        printf("%c", tolower(string1[i]));
    }
    printf(" e ");
    for(int i = 0; i < len2; i++)
    {
        printf("%c", tolower(string2[i]));
    }
    
    printf("Suas strings têm, respectivamente, %i e %i chars.\n", strlen(string1), strlen(string2));

    if(strcmp(string1, string2) == 0){
        printf("As strings são iguas.\n");
    }else if(strcmp(string1, string2) < 0){
        printf("A primeira string é menor que a segunda.\n");
    }else{
        printf("A primeira string é maior que a segunda. \n");
    }

    return 0;
}
