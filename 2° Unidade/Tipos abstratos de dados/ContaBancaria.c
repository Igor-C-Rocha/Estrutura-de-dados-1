#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ContaBancaria.h"

struct contabancaria{
//nome
  char titular[50];
//numero da conta
  int numconta;
//saldo
  float saldo;
};

ContaBancaria * cria_conta(char * titular, float saldo, int numconta){

ContaBancaria * conta = (ContaBancaria*) malloc(sizeof(ContaBancaria));
 if(conta == NULL){
    printf("sem memoria. \n");
   exit (1); 
 }else{
    printf("Conta alocada. \n");
 }

 conta->numconta=numconta;
 conta->saldo=saldo;
 strcpy(conta->titular, titular);

   return conta; 
}

void deposito(ContaBancaria * conta, float dinheiro){

conta->saldo += dinheiro;
    printf("Valor depossitado com sucesso. \n Novo saldo: %2.f", conta->saldo);
}

void sacar(ContaBancaria * conta, float valor){
 if(conta->saldo >= valor){
 conta->saldo -= valor;
    printf("\n Valor retirado com sucesso.");
 }else{
    printf("\n Saldo insuficiente.");
 }
} 

float saldo(ContaBancaria * conta, float saldo){
    return conta->saldo;
}

void excluir(ContaBancaria * conta){
    free(conta);
}