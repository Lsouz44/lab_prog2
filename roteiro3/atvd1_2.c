#include <stdio.h>

typedef struct {
    double lado;
} Cubo;

void inicializarCubo(Cubo *c, double lado) {
    c->lado = lado;
}

double tamanhoLado(Cubo *c) {
    return c->lado;
}

double calcularArea(Cubo *c) {
    return 6 * c->lado * c->lado;
}

double calcularVolume(Cubo *c) {
    return c->lado * c->lado * c->lado;
}

int main() {
    Cubo meuCubo;
    double lado = 3.0;

    inicializarCubo(&meuCubo, lado);

    printf("Tamanho do lado do cubo: %.2f\n", tamanhoLado(&meuCubo));
    printf("Area do cubo: %.2f\n", calcularArea(&meuCubo));
    printf("Volume do cubo: %.2f\n", calcularVolume(&meuCubo));

    return 0;
}
