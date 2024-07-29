#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

struct aluno{

int idade;
long int matricula;
char nome[50];

};

Aluno * aloca_aluno(void){

Aluno * aluno = (Aluno*)malloc(sizeof(Aluno));
    if (aluno == NULL){
        exit (1);
    }
    else{
    printf("Aluno alocado \n");
    }
    return aluno;
}

void preenche(Aluno * aluno){

    printf("Iforme o nome: \t");
        scanf(" %[^\n]", aluno->nome);
    printf("informe a idade e matricula: \t");
        scanf("%d %ld", &aluno->idade, &aluno->matricula);
    
}

void imprime(Aluno * aluno){
    printf("nome: %s idade: %d matricula: %ld \n", aluno->nome, aluno->idade, aluno->matricula);

}