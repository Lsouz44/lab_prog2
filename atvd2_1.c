#include <stdio.h>
#include <stdlib.h>

void crescente(int n){
    if (n > 0) {
        crescente(n-1);
        printf("%d ", n);
    }
}

void decrescente(int n){
    if (n > 0) {
        printf("%d ", n);
        decrescente(n-1);
    }
}

int main() {
    printf("Numeros em ordem crescente: ");
    crescente(5);
    printf("\n");

    printf("Numeros em ordem decrescente: ");
    decrescente(5);
    printf("\n");

    return 0;
}
