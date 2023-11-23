#include <stdio.h>
#include <stdlib.h>
#include "ord.h"

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os elementos do vetor: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Ordenando com Selection Sort: ");
    SelectionSort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Ordenando com Insertion Sort: ");
    InsertionSort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Ordenando com Bubble Sort: ");
    BubbleSort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
