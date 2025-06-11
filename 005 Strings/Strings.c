#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
    char string[N];
    int len = 0;
    int i = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    len = strlen(string);
    printf("string = %s\n", string);

    printf("Sua string tem %i chars.\n", strlen(string));

    //Printa a string na vertical
    printf("A string fica assim na vertical: \n");
    while (string[i] != '\0')
    {
        printf("%c\n", string[i++]);
    }

    printf("String ao contrário: ");
    for(int i = len - 1; i >= 0; i--){
        printf("%c", string[i]);
    }
    printf("\n\n");

    printf("A string na vertical, palavra por palavra, fica assim: ");
    while (string[i] != '\0')
    {
        if(string[i++] != ' '){
            printf("%c", string[i--]);
            i++;
        }
        else{
            printf("\n");
        }
    }

    printf("\n");
    

    return 0;
}
