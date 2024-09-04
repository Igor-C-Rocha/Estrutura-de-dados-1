#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no{

    int valor;
    struct no * prox;
};

No * no(int valor){
    No * novoNo = (No*)malloc(sizeof(No));
        if(novoNo == NULL){
            printf("Erro ao alocar memoria\n");
            exit(1);
        }
    novoNo->valor = valor;
    novoNo->prox = novoNo;
    return novoNo;
}

void inserir_no_inicio(No ** lista, int valor){
    No * novoNo = no(valor);
        if(*lista == NULL){
            *lista = novoNo;
        }else {
            No * ult = * lista;
                while(ult->prox != * lista){
                    ult = ult->prox;
                }
            novoNo->prox = * lista;
            ult->prox = novoNo;
            * lista = novoNo;
        }
}

void inserir_no_final(No ** lista, int valor){
    No * novoNo = no(valor);
        if(* lista == NULL){
            * lista = novoNo;
        }else {
            No * ult = * lista;
                while(ult->prox != * lista){
                    ult = ult->prox;
                }
            ult->prox = novoNo;
            novoNo->prox = * lista;
        }
}

void exibir(No * lista){
    if(lista == NULL){
        printf("lista vazia\n");
        return;
    }
    for(No * aux = lista; ; aux = aux->prox){
        printf("%d ", aux->valor);
    if (aux->prox == lista){
        break;
        }
    }
}