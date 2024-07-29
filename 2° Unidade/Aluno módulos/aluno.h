/*Arquivo cabeçalho para tipo abstrato de dados (TAD) Aluno*/

/*Tipo exportado*/
typedef struct aluno Aluno;

/*Função q aloca dinâmicamente uma struct aluno na memoria*/
Aluno * aloca_aluno(void);

/*Função para preenche uma struct Aluno. A função recebe um endereço para aluno*/
void preenche(Aluno * aluno);

/*Função para imprimir uma struct Aluno. A função recebe um endereço para aluno e imprime os dados*/
void imprime(Aluno * aluno);