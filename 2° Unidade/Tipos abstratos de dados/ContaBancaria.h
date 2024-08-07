
typedef struct contabancaria ContaBancaria;

/* Função q aloca memoria para struct conta e retorna seu endereço.
parametros:
char * titular: nome do titular da conta.
int numconta: número da conta.
float saldo: saldo da conta. */
ContaBancaria * cria_conta(char * titular, float saldo, int numconta);

/* Função q simula a operção de deposito.
parametros:
ContaBancaria * conta: ponteiro para a conta a ser depositada.
float dinheiro: saldo q sera adicionado a conta */
void deposito(ContaBancaria * conta, float dinheiro);

/* Função q simula o sistema de sague da conta.
parametros:
ContaBancaria * conta: ponteiro para a conta a ser sacado.
float dinheiro: valor q sera sacado da conta */
void sacar(ContaBancaria * conta, float valor);


float saldo(ContaBancaria * conta, float saldo);

void excluir(ContaBancaria * cnonta);