#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diaSemana;
    
    scanf("%i", &diaSemana);
    
    switch(diaSemana) {
        
        case 1:
            printf("Domingo\n");
            
            break;
            
        case 2:
            printf("Segunda-Feira\n");
            
            break;
            
        case 3:
            printf("Terça-Feira\n");
            
            break;
            
        case 4:
            printf("Quarta-Feira\n");
            
            break;
            
        case 5:
            printf("Quinta-Feira\n");
            
            break;
            
        case 6:
            printf("Sexta-Feira\n");
            
            break;
            
        case 7:
            printf("Sábado\n");
            
            break;
        default:
            printf("Dia ínvalido...\n");
    }
    
    return 0;
}