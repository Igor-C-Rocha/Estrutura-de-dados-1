#include "stdio.h"
#include "stdlib.h"

    // Função responsavel pela coleta dos valores
void Valor_vet(float vet1 [],float vet2 [],float vet3 []){
    int i,j,k; 
    printf("informe os valores do vetor A (x,y,z)\n"); 
    for (i = 0; i < 3; i++){
        scanf("%f", &vet1[i]);
    }
    printf("informe os valores do vetor B (x, y, z)\n");
        for (j = 0; j < 3; j++){
        scanf("%f", &vet2[j]);
        }
    printf("informe os valores do vetor C (x,y,z)\n");
            for (k = 0; k < 3; k++){
        scanf("%f", &vet3[k]);
    }
}
    // Função para calcular o produto escalar
float Pro_escalar(float AB[], float AC[]){
    return AB[0] * AC[0] + AB[1] * AC[1] + AB[2] * AC[2];
}
    // Função pra calcular vetores
void Calcular( float vet1[], float vet2[], float vet3[]){
    float AB[3];
    float AC[3];
    float pro, A[3], B[3], C[3];

    // Calcula os vetores AB e AC
    AB[0] = B[0] - A[0];
    AB[1] = B[1] - A[1];
    AB[2] = B[2] - A[2];

    AC[0] = C[0] - A[0];
    AC[1] = C[1] - A[1];
    AC[2] = C[2] - A[2];

    // Calcula o produto escalar
    pro = Pro_escalar(AB, AC);

    // Verifiaca se o produto escalar é zero
    if (pro == 0){
    printf("O trangulo ABC e retangulo no ponto A: %2.f. \n", pro);
} else{
    printf("O triangulo ABC nao e retangulo no ponto A: %2.f. \n", pro);
    }
}

// Função para criar o gráfico ASCII
void Criar_grafico_ascii(float A[], float B[], float C[]){
    const int width = 20;
    const int height = 10;
    char graph[height][width];

    // Inicializa o gráfico com espaços
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            graph[i][j] = ' ';
        }
    }

    // Adiciona eixos
    for (int i = 0; i < height; i++){
        graph[i][width / 2] = '|'; // Eixo Y
    }
    for (int j = 0; j < width; j++){
        graph[height / 2][j] = '-'; // Eixo X
    }

    // Normaliza as coordenadas
    int xA = (int)(A[0] / 10 * width);
    int yA = height - (int)(A[1] / 10 * height);
    int xB = (int)(B[0] / 10 * width);
    int yB = height - (int)(B[1] / 10 * height);
    int xC = (int)(C[0] / 10 * width);
    int yC = height - (int)(C[1] / 10 * height);

// Marca os pontos no gráfico com base no valor Z
    graph[yA][xA] = (A[2] > 0) ? '*' : 'A'; // Usando '*' se Z > 0
    graph[yB][xB] = (B[2] > 0) ? '*' : 'B';
    graph[yC][xC] = (C[2] > 0) ? '*' : 'C';

/* Quando o Z > 0, os pontos seram representados por *
Caso não seja, sera representado pela letra correspondente
Assim, permitindo q veja quais pontos têm um valor Z positivo. */

    // Imprime o gráfico
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            putchar(graph[i][j]);
        }
    putchar('\n');
    }
}

int main(){
    float A[3], B[3], C[3];

    Valor_vet(A, B, C);
    Calcular(A, B, C);
    Criar_grafico_ascii(A, B, C);

    return 0;
}