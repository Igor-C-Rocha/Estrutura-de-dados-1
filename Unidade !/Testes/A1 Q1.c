#include <stdio.h>
#include <stdlib.h>

void ler_vetor(float *vetor, int tamanho) {
    printf("Informe os valores para o vetor: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetor[i]);
    }
}

void imprime_vetor(float *vetor, int tamanho) {
    printf("Valores do vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%f ", vetor[i]);
    }
    printf("\n");
}

float *cria_vetor(int tamanho) {
    float *vetor = (float *)malloc(tamanho * sizeof(float));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1); // Verifica se há memoria 
    }
    return vetor;
}

int main() {

    // Entradas de dados 
    int tamanho = 5;
    float *vetor = cria_vetor(tamanho);
    
    // Inicialização das funções 
    ler_vetor(vetor, tamanho);
    imprime_vetor(vetor, tamanho);

    free(vetor); // Libera memoria

    return 0;
}