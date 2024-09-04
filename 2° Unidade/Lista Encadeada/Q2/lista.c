#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no{
    
    int valor;
    struct no *prox;
};

void inserir_inicio(No ** lista ,int valor){
    No * novo_elemento = (No*) malloc(sizeof(No));
        if(novo_elemento == NULL){exit(1);}
    novo_elemento->valor = valor;
    novo_elemento->prox = *lista;
    *lista = novo_elemento;
}

void inserir_final(No ** lista, int valor){
    No * novo_elemento = (No*) malloc(sizeof(No));
        if(novo_elemento == NULL){exit(1);}
    novo_elemento->valor = valor;
    novo_elemento->prox = NULL;
        if(*lista == NULL){
            *lista = novo_elemento;
        }else{
            No * aux = *lista;
                while(aux->prox != NULL){
                    aux = aux->prox;
                }
            aux->prox = novo_elemento;
        }
}

void exibir_lista(No * lista){
    No * count;
        for(count = lista; count != NULL; count = count->prox){
            printf("%d \n", count->valor);
        }
}

void remover_primeiro(No ** lista){
    if(*lista == NULL){exit(1);}
        No * aux = *lista;
        *lista = (*lista)->prox;
    free(aux);
}

int buscar(No * lista, int valor){
    int posicao = 0;
    No * count;
        for(count = lista; count != NULL; count = count->prox){
            if(count->valor == valor){
                return posicao;
            }
        posicao++;
    }
    printf("valor nao encontrado");
    printf("\n");

    return -1;
}

void remover_valor(No ** lista, int valor){
    No *ant = NULL;
    No *count = *lista;
        while(count->valor != valor){
            if(count == NULL){
                return;
            }
            ant = count;
            count = count->prox;
        }
    if(ant == NULL){
        *lista = count->prox;
    }else{
        ant->prox = count->prox;
    }
    free(count);
}

void inserir_apos(No ** lista, int valor, int novo_valor){
    No * aux;
        for(aux = * lista; aux != NULL; aux = aux->prox){
            if(aux->valor == valor){
                No * novo = (No*) malloc(sizeof(No));
                if(novo == NULL){
                    printf("erro ao alocar memoria");
                    exit(1);
                }
                novo->valor = novo_valor;
                novo->prox = aux->prox;
                aux->prox = novo;
                return;
        }
    }
}