#include <stdio.h>
#include <stdlib.h>
#define QUANTIDADE_ALUNO 5 // constante

typedef struct aluno{

int matricula, idade;
char nome[50];

}Aluno;

int main (void){

Aluno aluno[QUANTIDADE_ALUNO];
int count;
for (count = 0; count < QUANTIDADE_ALUNO; count++){
     printf("Informe o nome:\n");
         scanf(" %[^\n]", aluno[count].nome);
     printf("Informe a matricula\n");
         scanf("%d", &aluno[count].matricula);
     printf("Informe a idade\n");
         scanf("%d", &aluno[count].idade);         
}
     
return 0;    
}