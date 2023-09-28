#ifndef LISTA_SEQUENCIAL_H
#define LISTA_SEQUENCIAL_H

#define MAX_TAM 100 // Tamanho máximo da lista sequencial estática

typedef struct {
    int itens[MAX_TAM];
    int tamanho;
} ListaSequencial;

void inicializarLista(ListaSequencial *L);
int procura(ListaSequencial *L, int x);
void inserirOrdenado(ListaSequencial *L, int x);
int removerElemento(ListaSequencial *L, int x);
void imprimirLista(ListaSequencial *L);

#endif
