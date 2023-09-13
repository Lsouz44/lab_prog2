#include <stdio.h>

int negativos(float *vet, int N) {
    int count = 0;

    for(int i = 0; i < N; i++){
        if (vet[i] < 0){
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Tamanho do vetor deve ser maior que zero.\n");
        return 1;
    }

    float vet[N];
    printf("Digite os elementos do vetor:\n");
    for(int i = 0; i < N; i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &vet[i]);
}

int qtdNegativos = negativos(vet, N);
printf("Quantidade de números negativos: %d\n", qtdNegativos);

return 0;
}
