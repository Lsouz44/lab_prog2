#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    double preco;
    int quantidade;
} Produto;

typedef struct {
    Produto produtos[100];
    int totalProdutos;
} CatalogoProdutos;

void criarCatalogo(CatalogoProdutos *c) {
    c->totalProdutos = 0;
    printf("Catalogo vazio criado.\n");
}

void adicionarProduto(CatalogoProdutos *c, char *nome, double preco, int quantidade) {
    if (c->totalProdutos < 100) {
        Produto novoProduto;
        strncpy(novoProduto.nome, nome, sizeof(novoProduto.nome));
        novoProduto.preco = preco;
        novoProduto.quantidade = quantidade;

        c->produtos[c->totalProdutos] = novoProduto;
        c->totalProdutos++;

        printf("Produto '%s' adicionado ao catalogo.\n", nome);
    } else {
        printf("Catalogo de produtos esta cheio, nao e possivel adicionar um novo produto.\n");
    }
}

int verificaEstoque(CatalogoProdutos *c, char *nome) {
    for (int i = 0; i < c->totalProdutos; i++) {
        if(strcmp(c->produtos[i].nome, nome) == 0){
            return c->produtos[i].quantidade;
        }
    }
    return -1;
}

void imprimirCatalogo(CatalogoProdutos *c){
    printf("\n*** Catalogo de Produtos ***\n");
    for (int i = 0; i < c->totalProdutos; i++) {
        printf("Nome: %s | Preco: %.2lf | Quantidade em Estoque: %d\n",
                c->produtos[i].nome, c->produtos[i].preco, c->produtos[i].quantidade);
    }
}

int main() {
    CatalogoProdutos catalogo;

    criarCatalogo(&catalogo);

    adicionarProduto(&catalogo, "Processador Intel Core I7-12700KF", 1899.99, 30);
    adicionarProduto(&catalogo, "Placa de Video RTX 3070 Ti", 3349.99, 12);
    adicionarProduto(&catalogo, "Placa Mae Z590 Aorus Pro AX", 1589.90, 23);
    adicionarProduto(&catalogo, "Gabinete Gamer Lian Li PC-011 Dynamic", 1129.99, 18);

    imprimirCatalogo(&catalogo);

    char nomeProduto[] = "Placa Mae Z590 Aorus Pro AX";
    int quantidadeEstoque = verificaEstoque(&catalogo, nomeProduto);
    if (quantidadeEstoque != -1) {
        printf("\nQuantidade em estoque do %s: %d\n", nomeProduto, quantidadeEstoque);
    } else {
        printf("\nProduto %s nao encontrado no catalogo.\n", nomeProduto);
    }
    
    return 0;
}
