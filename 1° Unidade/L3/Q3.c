#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int n;

int **matriz = (int **)malloc(n * sizeof(int *));

for (int i = 0; i < n; i++)
    matriz[i] = (int *)malloc(n * sizeof(int));

    printf("Digite um numero: \n");
        scanf("%d", &n);

for (int i = 0; i < n; i++){
    matriz[i] = (int *)malloc(n * sizeof(int));
    }

    srand(time(0));

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
         matriz[i][j] = rand() % 100 + 1;
        }
    }

printf("Matriz resultante:\n");

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
    printf("%d\t", matriz[i][j]);
        }
    printf("\n");
    }

for (int i = 0; i < n; i++){
    free(matriz[i]);
    }
free(matriz);

    return 0;
}