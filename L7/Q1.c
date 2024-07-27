#include <stdio.h>

typedef enum genero{

    FEMININO,
    MASCULINO

}Genero;

typedef struct dados{

int id;
char nome[50];
Genero ge;

}Dados;

void preenche (Dados * dados){

printf("Nome:\n");
    scanf(" %[^\n]", dados->nome); 
printf ("Idade:\n");
    scanf("%d", &dados->id);
}

void imprime (Dados * dados){

printf("Nome: %s\n", dados->nome);
printf("Idade: %d\n", dados->id);

}

int main (){

Dados dado;
int gene;

preenche(&dado);
    printf ("Digite 1- F e 2- M:\n");
        scanf("%d", &gene);
switch (gene){
case 1:
    printf("Feminino \n");
    break;
case 2:
    printf("Masculino \n");
default:
    printf("Genero invalido \n");
    break;
    }    
imprime(&dado);

    return(0);
}