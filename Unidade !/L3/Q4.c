#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

int main(){

int num_pessoas;
char **nomes;
int *idades;

    printf("Digite o numero de pessoas: \n");
        scanf("%d", &num_pessoas);

nomes = (char **)malloc(num_pessoas * sizeof(char *));
    for (int i = 0; i < num_pessoas; i++){
        nomes[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
    }

    idades = (int *)malloc(num_pessoas * sizeof(int));

for (int i = 0; i < num_pessoas; i++){
    printf("Digite o nome da pessoa %d: \n", i + 1);
        scanf(" %[^\n]",nomes[i]);
    printf("Digite a idade da pessoa %d: \n", i + 1);
        scanf("%d", &idades[i]);
    }
    printf("\nNomes e idades armazenados:\n");
for (int i = 0; i < num_pessoas; i++){
    printf("Pessoa %d: Nome = %s, Idade = %d\n", i + 1, nomes[i], idades[i]);
    }
for (int i = 0; i < num_pessoas; i++){
    free(nomes[i]);
    }

free(nomes);
free(idades);

    return 0;
}