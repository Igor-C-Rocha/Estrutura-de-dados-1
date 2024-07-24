#include <stdio.h>

typedef enum categoria{

    ALIMENTO,
    BEBIDA,
    ELETRONICO

}Categoria;

typedef struct dados{

int preco;
char nome[50];
Categoria ca;

}Dados;

void preenche (Dados * dados){

printf("Nome do produto:\n");
    scanf(" %[^\n]", dados->nome); 
printf ("Preco:\n");
    scanf("%d", &dados->preco);
}

void imprime (Dados * dados){

printf("Nome: %s\n", dados->nome);
printf("Preco: %d\n", dados->preco);

}

int main (){

Dados dado;
int gene;

preenche(&dado);
    printf ("Digite 1- Alimento, 2- Bebida, 3- Eletronico:\n");
        scanf("%d", &gene);
switch (gene){
case 1:
    printf("\nAlimento \n");
    break;
case 2:
    printf("\nBebida \n");
    break;
case 3:
    printf("\nEletronico \n");
    break;
default:
    printf("Produto invalido \n");
    break;
    }    
imprime(&dado);

    return(0);
}