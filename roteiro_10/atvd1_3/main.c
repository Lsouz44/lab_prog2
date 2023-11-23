#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>


void selectionSort(int arr[], int n) {

    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {

        minIndex = i;

        for (j = i + 1; j < n; j++)

            if (arr[j] < arr[minIndex])

                minIndex = j;

        temp = arr[i];

        arr[i] = arr[minIndex];

        arr[minIndex] = temp;

    }

}


void insertionSort(int arr[], int n) {

    int i, j, key;

    for (i = 1; i < n; i++) {

        key = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];

            j = j - 1;

        }

        arr[j + 1] = key;

    }

}


void bubbleSort(int arr[], int n) {

    int i, j, temp;

    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }

}


void countOperations(char *filename) {

    FILE *file = fopen(filename, "r");

    if (file == NULL) {

        printf("Erro ao abrir o arquivo %s.\n", filename);

        return;

    }

    int N, *data;

    fscanf(file, "%d", &N);

    data = (int *) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {

        fscanf(file, "%d", &data[i]);

    }

    fclose(file);


    clock_t start, end;

    int comp_sel = 0, swap_sel = 0, comp_ins = 0, swap_ins = 0, comp_bub = 0, swap_bub = 0;


    start = clock();

    selectionSort(data, N);

    end = clock();

    for (int i = 1; i < N; i++) {

        if (data[i] < data[i - 1]) {

            comp_sel++;

        } else {

            swap_sel++;

        }

    }


    printf("SelectionSort(%s):\n", filename);

    printf("Tempo de execucao: %lf s\n", (double) (end - start) / CLOCKS_PER_SEC);

    printf("Numero de comparacoes: %d\n", comp_sel);

    printf("Numero de movimentacoes: %d\n", swap_sel);


    start = clock();

    insertionSort(data, N);

    end = clock();

    for (int i = 1; i < N; i++) {

        if (data[i] < data[i - 1]) {

            comp_ins++;

        } else {

            swap_ins++;

        }

    }


    printf("InsertionSort(%s):\n", filename);

    printf("Tempo de execucao: %lf s\n", (double) (end - start) / CLOCKS_PER_SEC);

    printf("Numero de comparacoes: %d\n", comp_ins);

    printf("Numero de movimentacoes: %d\n", swap_ins);


    start = clock();

    bubbleSort(data, N);

    end = clock();

    for (int i = 0; i < N - 1; i++) {

        for (int j = 0; j < N - i - 1; j++) {

            if (data[j] > data[j + 1]) {

                comp_bub++;

            } else {

                swap_bub++;

            }

        }

    }


    printf("BubbleSort(%s):\n", filename);

    printf("Tempo de execucao: %lf s\n", (double) (end - start) / CLOCKS_PER_SEC);

    printf("Numero de comparacoes: %d\n", comp_bub);

    printf("Numero de movimentacoes: %d\n", swap_bub);


    free(data);

}


int main() {

    countOperations("exemplo1.txt");

    countOperations("exemplo2.txt");

    countOperations("exemplo3.txt");

    return 0;

}
