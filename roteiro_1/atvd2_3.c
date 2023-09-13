#include <stdio.h>
#include <stdlib.h>

int somaIntervalo(int maior, int menor) {
    if (maior == menor) {
        return maior;
    } else if (maior < menor) {
        return 0;
    } else {
        return maior + somaIntervalo(maior-1, menor);
    }
}

int main() {
    int maior, menor;

    printf("Digite o maior numero do intervalo: ");
    scanf("%d", &maior);
    
    printf("Digite o menor numero do intervalo: ");
    scanf("%d", &menor);

    if (maior < menor) {
        printf("O maior numero deve ser maior ou igual ao menor numero.\n");
        return 1;
    }

    int resultado = somaIntervalo(maior, menor);

    printf("A soma dos numeros no intervalo [%d, %d] é: %d\n", maior, menor, resultado);

    return 0;
}
