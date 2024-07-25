#include <stdio.h>
#include <stdlib.h>

//Definir as estruturas: enum, enion, structs

typedef enum genero{

    MASCULINO = 0,
    FEMININO,
}Genero;

typedef union documentos{

    long int RG;
    long int CPF;
    long int NUM_PASSAPORTE;
    long int NUM_SUS;
}Documento;

typedef struct pessoa{

    char nome[50];
    Documento documento;
    int idade;
    Genero genero;

}Pessoa;

void preencher(Pessoa * pessoa){
    printf("Digite o nome: \t");
        scanf(" %[^\n]", pessoa->nome);
    printf("Documentos(RG,CPF,PASSAPORTE,SUS): \t");
        scanf(" %ld", &pessoa->documento.RG);
    printf("Digite a idade: \t");
        scanf(" %d", &pessoa->idade);
    printf("Digite o genero(0- MASCULINO 1-FEMININO): \t");
        scanf(" %d", &pessoa->genero);
}

void imprime(Pessoa * pessoa){
    printf("Nome: %s\nDocumento: %ld\nIdade: %d\n Genero: %s", pessoa->nome, pessoa->documento.CPF, pessoa->idade, pessoa->genero==MASCULINO?"Masculino":"Feminino");

}

void atualizar_idade(Pessoa * pessoa){
    int nova_idade;
    printf("Digite a nova idade: \t");
        scanf(" %d", &nova_idade);
    pessoa->idade = nova_idade;
    
}