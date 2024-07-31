#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{

int idade;
char nome[50]; 
char documento[50];

}Pessoa;

void preencher (Pessoa * pessoa){

    printf("Digite seu nome: \n");
       scanf(" %[^\n]", pessoa->nome); 
    printf("Digite seu documento: \n");
       scanf(" %[^\n]", pessoa->documento);
    printf("Digite sua idade: \n");
       scanf("%d", &pessoa->idade);
}

void imprime (Pessoa * pessoa){

    printf("Nome: %s\n", pessoa->nome);
    printf("Documento: %s\n", pessoa->documento);
    printf("Idade: %d\n", pessoa->idade);

}

void alteridade (Pessoa * pessoa){

int novaidade;
    printf("Digite a nova idade: \n");
        scanf("%d", &novaidade);
pessoa->idade = novaidade;

}

void imprimeMaiorMenor(Pessoa pessoas[], int n){

    Pessoa *maioridade = &pessoas[0];
    Pessoa *menoridade = &pessoas[0];

for (int i = 1; i < n; i++){
    if (pessoas[i].idade > maioridade->idade){
            maioridade = &pessoas[i];
        }
    if (pessoas[i].idade < menoridade->idade){
            menoridade = &pessoas[i];
        }
    }

    printf("Mais velho:\n");
imprime(maioridade);
    printf("\nMais novo:\n");
imprime(menoridade);

}

int main(){

Pessoa pessoa;
int n;


    printf("Digite o numero de pessoas: \n");
        scanf("%d", &n);

if (n <= 0){
    printf("Numero invalido\n");

return 1;
    }
Pessoa *pessoas = (Pessoa *)malloc(n * sizeof(Pessoa));
if (pessoas == NULL){
    printf("Erro\n");

return 1;
    }

for (int i = 0; i < n; i++){
preencher(&pessoas[i]);

    }

for (int i = 0; i < n; i++){
imprime(&pessoas[i]);
    printf("\n");

    }

for (int i = 0; i < n; i++){
alteridade(&pessoas[i]);

    }

imprimeMaiorMenor(pessoas, n);
free(pessoas);

    return 0;
}