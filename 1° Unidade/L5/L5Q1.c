#include <stdio.h>
#include <stdlib.h>

typedef struct id{

char cargo[50];
char nome[50];
int identificador;
float salario;

}ID;

void preenche (ID * id){

    printf("Digite seu nome: \n");
       scanf(" %[^\n]", id->nome); 
    printf("Digite seu cargo: \n");
       scanf(" %[^\n]", id->cargo);
    printf("Digite seu identificador: \n");
       scanf("%d", &id->identificador);
    printf("Digite seu salario: \n");
       scanf("%f", &id->salario);
}
void alterasalario (ID * id){

float novosalario;
    printf("Digite o novo salario: \n");
        scanf("%f", &novosalario);
id->salario = novosalario;
}

void imprime (ID * id){

    printf("Nome: %s\n", id->nome);
    printf("Cargo: %s\n", id->cargo);
    printf("Identificador: %d\n", id->identificador);
    printf("Salario: %2.f\n", id->salario);

}

void imprimeMaiorMenor(ID funcionarios[], int n){

    ID maiorSalario = funcionarios[0];
    ID menorSalario = funcionarios[0];

for (int i = 1; i < n; i++){
    if (funcionarios[i].salario > maiorSalario.salario){
            maiorSalario = funcionarios[i];
        }
    if (funcionarios[i].salario < menorSalario.salario){
            menorSalario = funcionarios[i];
        }
    }

    printf("Funcionario com maior salario:\n");
    printf("Cargo: %s\n", maiorSalario.cargo);
    printf("Salario: %.2f\n", maiorSalario.salario);

    printf("\nFuncionario com menor salario:\n");
    printf("Cargo: %s\n", menorSalario.cargo);
    printf("Salario: %.2f\n", menorSalario.salario);
}

int main(){

ID id;
int n;

    printf("Digite o numero de funcionarios: \n");
        scanf("%d", &n);

if (n <= 0){
    printf("Numero invalido\n");

return 1;
    }
ID *funcionarios = (ID *)malloc(n * sizeof(ID));
if (funcionarios == NULL){
    printf("Erro\n");

return 1;
    }
for (int i = 0; i < n; i++){
preenche(&funcionarios[i]);

    }
for (int i = 0; i < n; i++){
alterasalario(&funcionarios[i]);

    }
for (int i = 0; i < n; i++){
imprime(&funcionarios[i]);
    printf("\n");

    }
imprimeMaiorMenor(funcionarios, n);
free(funcionarios);

    return 0;
}