#include <stdio.h>
#include <stdlib.h>
#define QUANTIDADE_ALUNO 5 // constante

typedef struct aluno
{

    int matricula, idade;
    char nome[50];

} Aluno;

/*função para preencher um vetor de struct aluno*/
void pre(Aluno *aluno, int tamanho)
{
    int count;
    for (count = 0; count < tamanho; count++)
    {
        printf("Informe o nome:\n");
        scanf("%[^\n]", aluno[count].nome);
        printf("Informe a matricula\n");
        scanf("%d", &aluno[count].matricula);
        printf("Informe a idade\n");
        scanf("%d", &aluno[count].idade);
    }
}

int main(void)
{

    Aluno *aluno = (Aluno *)malloc(QUANTIDADE_ALUNO * sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("Sem memoria");
        exit(1);
    }

    pre(aluno, QUANTIDADE_ALUNO);

    int novo_tamanho;
    printf("Informe o novo tamanho do vetor: \t");
    scanf("%d", &novo_tamanho);
    aluno = (Aluno *)realloc(aluno, novo_tamanho * sizeof(Aluno));
    if (aluno == NULL)
    {
        exit(1);
    }
    else
    {
        printf("Vetor alocado com sucesso!\n");
    }

    pre(aluno, novo_tamanho);

    return 0;
}