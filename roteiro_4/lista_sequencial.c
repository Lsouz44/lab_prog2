#include <stdio.h>
#include "lista_sequencial.h"

void inicializarLista(ListaSequencial *L) {
    L->tamanho = 0;
}

int procura(ListaSequencial *L, int x) {
    for (int i = 0; i < L->tamanho; i++) {
        if (L->itens[i] == x) {
            return i;
        }
    }
    return -1;
}

void inserirOrdenado(ListaSequencial *L, int x) {
    if (L->tamanho == MAX_TAM) {
        printf("Lista cheia, inserção não realizada.\n");
        return;
    }

    int i = L->tamanho - 1;
    while (i >= 0 && L->itens[i] > x) {
        L->itens[i + 1] = L->itens[i];
        i--;
    }
    L->itens[i + 1] = x;
    L->tamanho++;
}

int removerElemento(ListaSequencial *L, int x) {
    int indice = procura(L, x);
    if (indice == -1) {
        printf("Elemento %d não encontrado na lista.\n", x);
        return 0;
    }

    for (int i = indice; i < L->tamanho - 1; i++) {
        L->itens[i] = L->itens[i + 1];
    }
    L->tamanho--;
    return 1;
}

void imprimirLista(ListaSequencial *L) {
    printf("Lista Ordenada: ");
    for (int i = 0; i < L->tamanho; i++) {
        printf("%d ", L->itens[i]);
    }
    printf("\n");
}