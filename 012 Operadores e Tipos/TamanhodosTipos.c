//Tamanho dos tipos

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    //int
    
    printf("Número de bytes do int: %ld\n", sizeof(int));
    printf("Número de bytes do signed int: %ld\n", sizeof(signed int));
    printf("O maior int possível é: %i\n", INT_MAX);
    printf("O menor int possível é: %i\n", INT_MIN);
    printf("Número de bytes do long int: %ld\n", sizeof(long int));
    printf("O maior long int possível é: %li\n", LONG_MAX);
    printf("O menor long int possível é: %li\n", LONG_MIN);
    printf("Número de bytes do short int: %ld\n", sizeof(short int));
    printf("O maior short int possível é: %d\n", SHRT_MAX);
    printf("O menor short int possível é: %d\n", SHRT_MIN);
    printf("Número de bytes do unsigned int: %ld\n", sizeof(unsigned int));
    printf("O maior unsigned int possível é: %u\n", UINT_MAX);
    
    //float e double
    
    printf("Número de bytes do float: %ld\n", sizeof(float));
    printf("O maior float possível é: %g\n", FLT_MAX);
    printf("O menor float possível é: %g\n", FLT_MIN);
    printf("Número de bytes do double: %ld\n", sizeof(double));
    printf("O maior double possível é: %g\n", DBL_MAX);
    printf("O menor double possível é: %g\n", DBL_MIN);
    
    //char
    
    printf("Número de bytes do char: %ld\n", sizeof(char));
    printf("O maior char possível é: %d\n", CHAR_MAX);
    printf("O menor char possível é: %d\n", CHAR_MIN);
    printf("O maior unsigned char possível é: %d\n", UCHAR_MAX);
    
    return 0;
}
