#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2){
    float delta = B*B-4*A*C;

    if (delta < 0) {
        return 0;
    } else if (delta == 0){
        *X1 = -B/(2*A);
        *X2 = *X1;
        return 1;
    } else {
        *X1 = (-B+sqrt(delta)) / (2*A);
        *X2 = (-B-sqrt(delta)) / (2*A);
        return 2;
    }
}

int main() {
    float A, B, C, X1, X2;
    printf("Digite os valores de A, B e C (Ax² + Bx + C = 0): ");
    scanf("%f %f %f", &A, &B, &C);

    if (A == 0){
        printf("O valor de A deve ser diferente de zero.\n");
        return 1;
    }

    int numRaizes = raizes(A, B, C, &X1, &X2);
    if (numRaizes == 0) {
        printf("Não existem raízes reais.\n");
    } else if (numRaizes == 1) {
        printf("Existem uma raiz real:\n");
        printf("X1 e X2 = %.2f\n", X1);
    } else {
        printf("Existem duas raízes reais:\n");
        printf("X1 = %.2f\n", X1);
        printf("X2 = %.2f\n", X2);
    }
    
    return 0;
}
