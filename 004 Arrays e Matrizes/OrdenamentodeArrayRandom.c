#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void bubbleSort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }   
    
    printf("\n");
}

int main()
{
    clock_t end = 0.0, start = 0.0;
    int array[N];
    int size = sizeof(array) / sizeof(array[0]);
    double sec = 0.0;
    
    srand(time(NULL));
    
    start = clock();
    
    printf("Array antes do Bubble Sort: ");
    for(int i = 0; i < N; i++){
        array[i] = rand() % 100 + 1;
        printf("%i ", array[i]);
    }
    printf("\n");
    
    bubbleSort(array, size);
    printf("Array depois do Bubble Sort: ");
    printArray(array, size);
    
    end = clock();
    
    sec = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("Tempo de execução: %f", sec);
    
    return 0;
}