#include <stdio.h>

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
    int array[5] = {56, 29, 37, 11, 2};
    int size = sizeof(array) / sizeof(array[0]);
    
    bubbleSort(array, size);
    printf("Array depois do Bubble Sort: ");
    printArray(array, size);

    return 0;
}
