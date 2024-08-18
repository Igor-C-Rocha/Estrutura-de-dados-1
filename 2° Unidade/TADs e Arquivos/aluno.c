#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct aluno{

int matricula;
char nome[50];
float media;

}Aluno;

Aluno *criarAluno(int matricula, char nome[50], float media){

Aluno *aluno = (Aluno*)malloc(sizeof(aluno));

    aluno->matricula = matricula;
    aluno->media = media;
    strcpy(aluno->nome, nome);

return (aluno);    
}

void salvarAlunoEmArquivo(char ARQ, Aluno *aluno){

FILE * arq = fopen(ARQ, "a");
if (arq == NULL){
    printf("Erro ao abrir arquivo!");
    exit(1);
 }else{
    printf("Arquivo aberto com sucesso");
    }
    fpritnf(arq, "%d\t%s\t%f\n", aluno->matricula, aluno->nome, aluno->media);
    fclose(arq);
}

void exibirAlunos(char ARQ[]){
    Aluno aluno;
    int cont = 1;

FILE *arq = fopen(ARQ, "r");
if (arq == NULL){
    printf("Erro ao abrir arquivo!");
    exit(1);
 }else{
    printf("Arquivo aberto com sucesso");
    }    
while (fscanf(arq, "%d\t%s\t%f\n", &aluno.matricula, aluno.nome, &aluno.media) != EOF){
    
    printf("Aluno %d: %d\t%s\t%2.f\n", aluno.matricula, aluno.nome, aluno.media);
cont++;
}    
fclose(arq);
}