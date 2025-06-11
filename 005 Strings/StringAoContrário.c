#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int len;
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    
    len = strlen(string);
    
    printf("String ao contrário: ");
    for(int i = len - 1; i >= 0; i--){
        printf("%c", string[i]);
    }
    printf("\n");
    

    return 0;
}