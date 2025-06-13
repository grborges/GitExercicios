#include <stdio.h>
#include <string.h>

#define N 100

int main()
{
    char frase[N];
    int i = 0;

    printf("Digite uma frase: ");
    gets(frase);

    printf("Você digitou: ");
    while (frase[i] != '\0')
    {
        if(frase[i++] != ' '){
            putchar(frase[i-1]);
        }else{
            putchar('\n');
        }
    }
    printf("\n");
    
    return 0;
}
