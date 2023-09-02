#include <stdio.h>
#include <stdlib.h>

void Vetordecrescente(char vet[], int tam) {
    if (tam > 0) {
        printf("%c ", vet[tam-1]);
        Vetordecrescente(vet, tam-1);
    }
}

int main() {
    char vet[] = {'a', 'b', 'c', 'd', 'e'};
    int tam = sizeof(vet) / sizeof(vet[0]);

    printf("Elementos do vetor em ordem descrescente: ");
    Vetordecrescente(vet, tam);
    printf("\n");

    return 0;
}
