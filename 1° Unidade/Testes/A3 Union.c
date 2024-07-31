#include <stdio.h>
#include <stdlib.h>

typedef union documento{

long int CPF[11];
long int RG[11];

}Documento;

typedef struct pessoa{

char nome[50];
Documento documento;

}Pessoa;

void preenchePessoa(Pessoa * pessoa){

int opcaoDocumento;

    printf("Digite o nome: \n");
        scanf (" %[^\n]", pessoa->nome);
    printf("Digite 1-CPF ou 2-RG: \n");
        scanf("%d", &opcaoDocumento);
switch (opcaoDocumento){

case 1:
    printf("Digite seu CPF: \n");
        scanf("%ld", pessoa->documento.CPF);
    break;
case 2:
    printf("Digite seu RG: \n");
        scanf("%ld", pessoa->documento.RG);
    break;

default:
    printf("Opcao invalida. \n");
    break;
    }        
}

void imprimePessoa (Pessoa * pessoa){

    printf("Nome: %s \nDocumento: %d \n", pessoa->nome, pessoa->documento);

}

int main (){

Pessoa pessoa;

preenchePessoa(&pessoa);
imprimePessoa(&pessoa);

    return(0);
}