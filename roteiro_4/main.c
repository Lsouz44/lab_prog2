#include <stdio.h>
#include "lista_sequencial.h"

int main() {
    ListaSequencial lista;
    inicializarLista(&lista);

    inserirOrdenado(&lista, 3);
    inserirOrdenado(&lista, 1);
    inserirOrdenado(&lista, 5);
    inserirOrdenado(&lista, 2);
    inserirOrdenado(&lista, 4);

    imprimirLista(&lista);

    int indice = procura(&lista, 3);
    if (indice != -1) {
        printf("Elemento 3 encontrado no índice %d.\n", indice);
    } else {
        printf("Elemento 3 não encontrado na lista.\n");
    }

    removerElemento(&lista, 2);

    printf("Lista após remoção do elemento 2: ");
    for (int i = 0; i < lista.tamanho; i++) {
        printf("%d ", lista.itens[i]);
    }
    printf("\n");

    return 0;
}