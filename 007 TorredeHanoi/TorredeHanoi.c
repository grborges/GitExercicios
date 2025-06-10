// Torre de Hanoi


#include <stdio.h>

int hanoi(int n,int origem, int auxiliar, int destino){
    
    if(n <= 1){
        printf("Mova da haste %i para a haste %i\n", origem, destino);
    }
    else{
        hanoi(n - 1, origem, destino, auxiliar);
        printf("Mova da haste %i para a haste %i\n", origem, destino);
        
        hanoi(n - 1, auxiliar, origem, destino);
    }
    
    
    return 0;

}

int main(){
    
    int n;
    
    printf("\tNúmero de discos: ");
    scanf("%i", &n);
    
    printf("%d", hanoi(n, 1, 2, 3));
    
    return 0;
}