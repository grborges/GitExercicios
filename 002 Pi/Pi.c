#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double pontos_no_circulo = 0, x = 0, y = 0, pi;
    double num_pontos = 0;

    srand(time(NULL));

    for(int i = 0; i <= 10000; i++){

        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        num_pontos++;

        if((x * x) + (y * y) <= 1){
            pontos_no_circulo++;
        }else{}

    }

    pi = 4 * pontos_no_circulo / num_pontos;

    printf("Pi é aproximadamente %.5f\n", pi);

    return 0;

}