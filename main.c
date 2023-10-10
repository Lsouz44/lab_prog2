#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

int main(){
    Deque* dq = NULL;
    int opcao, elemento;

    do{
        printf("\nMenu:\n");
        printf("1 - Criar Deque\n");
        printf("2 - Inserir um item no fim\n");
        printf("3 - Inserir um item no inicio\n");
        printf("4 - Ver o inicio do Deque\n");
        printf("5 - Ver o fim do Deque\n");
        printf("6 - Remover um item do fim\n");
        printf("7 - Remover um item do inicio\n");
        printf("8 - Imprimir o Deque\n");
        printf("9 - Destruir o Deque\n");
        printf("10 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                if(dq == NULL){
                    dq = criaDeque();
                    printf("Deque criado com sucesso!\n");
                }else{
                    printf("Deque ja foi criado!\n");
                }
                break;
            case 2:
                if(dq != NULL){
                    printf("Digite o elemento a ser inserido no fim: ");
                    scanf("%d", &elemento);
                    if(insereFim(dq, elemento)){
                        printf("Elemento inserido no fim do Deque com sucesso!\n");
                    }else{
                        printf("Falha ao inserir elemento no fim do Deque.\n");
                    }
                }else{
                    printf("Deque nao foi criado!\n");
                }
                break;
            case 3:
                if(dq != NULL){
                    printf("Digite o elemento a ser inserido no inicio: ");
                    scanf("%d", &elemento);
                    if(insereIni(dq, elemento)){
                        printf("Elemento inserido no inicio do Deque com sucesso!\n");
                    }else{
                        printf("Falha ao inserir elemento no inicio do Deque.\n");
                    }
                }else{
                    printf("Deque nao foi criado!\n");
                }
                break;
            case 4:
                if(dq != NULL){
                    if(verIni(dq, &elemento)){
                        printf("Elemento no inicio do Deque: %d\n", elemento);
                    }else{
                        printf("Deque esta vazio.\n");
                    }
                }else{
                    printf("Deque nao foi criado!\n");
                }
                break;
            case 5:
                if(dq != NULL){
                    if(verFim(dq, &elemento)){
                        printf("Elemento no fim do Deque: %d\n", elemento);
                    }else{
                        printf("Deque esta vazio.\n");
                    }
                }else{
                    printf("Deque nao foi criado!\n");
                }
                break;
            case 6:
                if(dq != NULL){
                    if(removeFim(dq)){
                        printf("Elemento removido do fim do Deque com sucesso!\n");
                    }else{
                        printf("Falha ao remover elemento do fim do Deque.\n");
                    }
                }else{
                    printf("Deque nao foi criado!\n");
                }
                break;
            case 7:
                if(dq != NULL){
                    if(removeIni(dq)){
                        printf("Elemento removido do inicio do Deque com sucesso!\n");
                    }else{
                        printf("Falha ao remover elemento do inicio do Deque.\n");
                    }
                }else{
                    printf("Deque nao foi criado!\n");
                }
                break;
            case 8:
                if(dq != NULL){
                    imprime(dq);
                }else{
                    printf("Deque nao foi criado!\n");
                }
                break;
            case 9:
                if(dq != NULL){
                    destroiDeque(dq);
                    dq = NULL;
                    printf("Deque destruido com sucesso!\n");
                }else{
                    printf("Deque nao foi criado!\n");
                }
                break;
            case 10:
                if(dq != NULL){
                    destroiDeque(dq);
                }
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    }while(opcao != 10);

    return 0;
}