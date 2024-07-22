#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {

    char nome[50];
    char cargo[50];
    float salario;
    long int identificador;

}Funcionario;

void preenche (Funcionario * servidor){
    printf("Digite o nome do funcionario: \t");
        scanf(" %[^\n]", servidor->nome);
    printf("Digite o salario: \t");
        scanf(" %[^\n]", servidor->cargo);
    printf("Digite o salario: \t");
        scanf("%f", &servidor->salario);
    printf("Digite o identificador: \t");
        scanf("%d", &servidor->identificador);
}

void imprime (Funcionario * servidor){

    printf("Nome do funcionario: "%c, Funcionario.nome);
    printf("Cargo do funcionario: "%c, Funcionario.cargo);
}

int main (){

preenche(funcionario);


return (0);    
}