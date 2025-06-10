#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
    char string[N];

    int i = 0;

    printf("Digite uma string: ");
    gets(string); // le a string ate o caracter de nova linha
    printf("string = %s\n", string);

    printf("Sua string tem %li chars.\n", strlen(string));

    //Printa a string na vertical
    printf("A string fica assim na vertical: \n");
    while (string[i] != '\0')
    {
        printf("%c\n", string[i++]);
    }

    printf("A string na vertical, palavra por palavra, fica assim: ");
    
    while (string[i] != '\0')
    {
        if(string[i++] != ' '){
            putchar(string[i--]);
            i++;
        }
        else{
            putchar('\n');
        }
    }

    printf("\n");
    

    return 0;
}
