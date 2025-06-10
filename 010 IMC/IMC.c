//Calculadora de IMC


#include <stdio.h>

int main(){
    float peso = .0, altura = .0, imc = .0; // .0 pq é decimal, normalmente, é melhor colocar as var no início do código

    printf("Entre com seu peso: ");
    scanf("%f", &peso);
    
    printf("Entre com sua altura: ");
    scanf("%f", &altura);
    
    printf("Seu peso é %3.2f, e sua altura é %1.2f\n", peso, altura); // 3.2 para formatar, 3 casas inteiras e 2 decimais
    
    imc = peso / (altura * altura);
    printf("Seu imc é %3.2f\n", imc);
    
    if(imc < 18.5){
        printf("CLassificação = Magreza\n");
    }
    else if(imc < 25 && imc >=18.5){ // && = conjunção lógica
        printf("Cassificação = Normal\n");
    }
    else if(imc > 25 && imc <= 30 ){ 
        printf("Cassificação  = Excesso de peso\n");
    }
    else if(imc >= 30 && imc < 40){
        printf("Classificação = Obesidade\n");
    }
    else{
        printf("Classificação = Obesidade Grave\n"); 
    }
    
    return 0;
}