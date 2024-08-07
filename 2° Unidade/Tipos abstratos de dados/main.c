#include <stdio.h>
#include "ContaBancaria.h"

int main(){

ContaBancaria * conta = cria_conta("Maria", 1000.00, 23455);
    deposito(conta, 250.00);
    sacar(conta, 300.00);

    return 0;
}