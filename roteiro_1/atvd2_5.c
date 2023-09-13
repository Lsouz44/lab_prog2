#include <stdio.h>
#include <stdlib.h>

// letra a)
void preencherVet(int vet[], int N, int indice) {
    if (indice < N) {
        printf("Digite o valor para a posição %d: ", indice + 1);
        scanf("%d", &vet[indice]);
        preencherVet(vet, N, indice+1);
    }
}

// letra b)
void imprimirCrescente(int vet[], int N, int indice) {
    if (indice < N) {
        printf("%d ", vet[indice]);
        imprimirCrescente(vet, N, indice+1);
    }
}

void imprimirDescrescente(int vet[], int N, int indice) {
    if (indice >= 0) {
        printf("%d ", vet[indice]);
        imprimirDescrescente(vet, N, indice-1);
    }
}

// letra c)
int encontrarMaior(int vet[], int N, int indice) {
    if (indice == N - 1) {
        return vet[indice];
    }

    int maiorRestante = encontrarMaior(vet, N, indice+1);

    return (vet[indice] > maiorRestante) ? vet[indice] : maiorRestante;
}

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vet[N];

    preencherVet(vet, N, 0);

    printf("Elementos do vetor em ordem crescente: ");
    imprimirCrescente(vet, N, 0);
    printf("\n");

    printf("Elementos do vetor em ordem decrescente: ");
    imprimirDescrescente(vet, N, N-1);
    printf("\n");

    int maior = encontrarMaior(vet, N, 0);

    printf("O maior elemento do vetor é: %d\n", maior);

    return 0;
}
