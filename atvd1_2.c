#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void preencherVetor(int vet[], int tam) {
    for (int i=0; i < tam; i++) {
        vet[i] = rand() % 1000 + 1;
    }
}

int maiorElemento(int vet[], int tam) {
    int maior = vet[0];
    for (int i = 1; i < tam; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int menorElemento(int vet[], int tam) {
    int menor = vet[0];
    for (int i = 1; i < tam; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
        }
    }
    return menor;
}

double media(int vet[], int tam){
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += vet[i];
    }
    return (double)soma / tam;
}

int main() {
    srand(time(NULL));

    int vet1[TAM];
    int vet2[TAM];

    preencherVetor(vet1, TAM);
    preencherVetor(vet2, TAM);

    int maior1 = maiorElemento(vet1, TAM);
    int maior2 = maiorElemento(vet2, TAM);
    printf("Maior elemento do vetor 1: %d\n", maior1);
    printf("Maior elemento do vetor 2: %d\n", maior2);

    int menor1 = menorElemento(vet1, TAM);
    int menor2 = menorElemento(vet2, TAM);
    printf("Menor elemento do vetor 1: %.2lf\n", menor1);
    printf("Menor elemento do vetor 2: %.2lf\n", menor2);

    double media1 = media(vet1, TAM);
    double media2 = media(vet2, TAM);
    printf("Média do vetor 1: %d\n", media1);
    printf("Média do vetor 2: %d\n", media2);

    return 0;
}
