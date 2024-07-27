#include <stdio.h>
#define NUM_ALUNOS 10

void Gabarito(int N, char gabarito[]){

    printf("Qual o gabarito da prova: \n");
    for (int i = 0; i < N; i++) {
        scanf(" %c", &gabarito[i]);
    }
}

void lerrespostas( int N, char respostas[][N]){

    for (int i = 0; i < NUM_ALUNOS; i++) {
    printf("Informe as respostas do aluno %d: \n", i + 1);
        for (int j = 0; j < N; j++) {
        scanf(" %c", &respostas[i][j]);
        }
    }
}

float calcularnotas( int N, char gabarito[], char respostas[][N],  float notas[]){
    int aprovados = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        int acertos = 0;

        for (int j = 0; j < N; j++) {
            if (respostas[i][j] == gabarito[j]) {
                acertos++;
            }
        }
        notas[i] = (10.0 / N) * acertos;

    printf("Nota do aluno %d: %.2f\n", i + 1, notas[i]);
        if (notas[i] >= 6.0) {
            aprovados++;
        }
    }
    float P_aprovacao = (aprovados * 100.0) / NUM_ALUNOS;
    printf("Porcentagem de aprovacao: %.1f%%\n", P_aprovacao);

    return P_aprovacao;
}

int main() {

    int N;
    
    printf("Informe o numero de questoes:\n");
        scanf("%d", &N); 

    float notas [NUM_ALUNOS];    
    char gabarito[N];    
    char respostas[NUM_ALUNOS][N];

Gabarito(N, gabarito);
lerrespostas(N, respostas);
calcularnotas(N, gabarito, respostas, notas);

    return 0;
}