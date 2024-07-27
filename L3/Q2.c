#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int **matriz, int linhas, int colunas){
    
for (int i = 0; i < linhas; i++){
    for (int j = 0; j < colunas; j++){
    printf("%d ", matriz[i][j]);
        }
    }
}

void imprimirMatrizTransposta(int **matriz, int linhas, int colunas){

for (int i = 0; i < colunas; i++){
    for (int j = 0; j < linhas; j++){
    printf("%d ", matriz[j][i]);
        }
    }
}

int main(){

int linhas, colunas;

int **matriz = (int **)malloc(linhas * sizeof(int *));
for (int i = 0; i < linhas; i++){
    matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    printf("Digite o numero de linhas: \n");
        scanf("%d", &linhas);
    printf("Digite o numero de colunas: \n");
        scanf("%d", &colunas);
    
for (int i = 0; i < linhas; i++){
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    
    printf("Digite os elementos da matriz:\n");
for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++){
    printf("Elemento [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz original:\n");
imprimirMatriz(matriz, linhas, colunas);
    printf("\n");

    printf("Matriz transposta:\n");
imprimirMatrizTransposta(matriz, linhas, colunas);
    
for (int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
free(matriz);

    return 0;
}