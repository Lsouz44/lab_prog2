#include <stdio.h>
#include <stdlib.h>

int multRecursiva(int N, int M){
    if (N == 0 || M == 0) {
        return 0;
    } else if (N == 1) {
        return M;
    } else {
        return M + multRecursiva(N-1, M);
    }
}

int main(){
    int N, M;
    printf("Digite o primeiro numero (N): ");
    scanf("%d", &N);

    printf("Digite o segundo numero (M): ");
    scanf("%d", &M);

    if (N < 0 || M < 0) {
        printf("Os numeros devem ser inteiros positivos.\n");
        return 1;
    }

    int res = multRecursiva(N, M);

    printf("O resultado da multiplicação %d * %d é: %d\n", N, M, res);

    return 0;
}
