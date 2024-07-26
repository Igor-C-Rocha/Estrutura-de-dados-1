#include <stdio.h>
#define MAX 1000

void lerMP(int *M, int *N, char mapa [MAX][MAX]){

    printf("Digite o numero de linhas e colunas do mapa: \n");
        scanf("%d %d", M, N);
    printf("Como eh o mapa (%d linhas com %d colunas cada)\n", *M, *N);
    printf("utilizando '.' e '#' para montar o mapa.\n('.' para agua e '#' para a terra):\n");
for(int i = 0; i < *M; i++) {
        scanf("%s", mapa[i]);
    }
}

int nolimite(int i, int j, int M, int N){
    return (i >= 0 && i < M && j >= 0 && j < N);
}

void Verifica(int M, int N, int *costa , char mapa [MAX][MAX]){

*costa = 0;

for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){

if (mapa[i][j] == '#'){
    if (!nolimite(i-1, j, M, N) || mapa[i-1][j] == '.' ||  // cima
    !nolimite(i+1, j, M, N) || mapa[i+1][j] == '.' ||  // baixo
    !nolimite(i, j-1, M, N) || mapa[i][j-1] == '.' ||  // esquerda
    !nolimite(i, j+1, M, N) || mapa[i][j+1] == '.'){  // direita
        (*costa)++;
                }
            }
        }
    }
    printf("A extensao da costa eh: %d\n", *costa);
}

int main(){

    int M, N, costa;
    char mapa[MAX][MAX];

lerMP(&M, &N, mapa);
Verifica(M, N, &costa, mapa);

    return 0;
}