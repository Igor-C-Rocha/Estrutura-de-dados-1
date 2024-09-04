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

void remover_primeiro(No ** lista){
    if (* lista == NULL){
        return;
    }
    No * primeiro = * lista;
        if(primeiro->prox == * lista){
            free(primeiro);
            * lista = NULL;
        }else{
            No * ultimo = * lista;
                while(ultimo->prox != * lista){
                    ultimo = ultimo->prox;
                }
            ultimo->prox = primeiro->prox;
            * lista = primeiro->prox;
        free(primeiro);
        }
}

void remover_ultimo(No ** lista){
    if (* lista == NULL){
        return;
    }
    No * atual = * lista;
    No * anterior = NULL;
        while (atual->prox != * lista){
            anterior = atual;
            atual = atual->prox;
        }
    if(anterior == NULL){
        free(* lista);
        * lista = NULL;
    }else{
        anterior->prox = * lista;
        free(atual);
    }
}