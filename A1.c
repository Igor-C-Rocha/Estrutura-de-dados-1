#include<stdio.h>
#include<stdlib.h>


int main(void){

int linha, coluna;

     printf("Informe a quantidade de linhas e colunas da matriz: ");
         scanf("%d %d", &linha, &coluna);

// alocação dinâmica da matriz
int ** matriz = (int**) malloc(linha*sizeof(int*));
         if (matriz == NULL){ 
            exit(1);
        }
for (int count = 0; count < linha; count++){
     matriz[count] = (int*) malloc(coluna*sizeof(int));
         if(matriz[count] == NULL){
            exit(1);
        }
    }

// Elementos da matriz
     printf("Informe os elementos: ");
for (int linha = 0; linha < linha; linha++){
     for (int coluna = 0; coluna < coluna; coluna++){
         scanf("%d", &matriz[linha][coluna]);
    }
}     

// Imprimir a matriz
for (int linha = 0; linha < linha; linha++){
     for (int coluna = 0; coluna < coluna; coluna++){
         printf("%d \t", &matriz[linha][coluna]);
    }
}     

// Liberar matriz da memoria
for (linha = 0; linha < linha; linha++){
     free(matriz[linha]);
}

for (coluna = 0; coluna < coluna; coluna++){
     free(matriz[coluna]);
}
free(matriz);

return(0);    
}