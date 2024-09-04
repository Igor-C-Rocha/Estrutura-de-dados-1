#include "lista.c"

int main(){

    No * lista = NULL;

    inserir_no_inicio(&lista, 3);
    inserir_no_inicio(&lista, 4);
    inserir_no_final(&lista, 2);
    inserir_no_final(&lista, 1);
    exibir(lista);
    printf("\n");

    int aux = buscar(lista, 3);
        if(aux != -1){
            printf("valor encontrado na posicao: %d\n", aux);
        }else{
            printf("valor nao encontrado\n");
        }
    printf("\n");
    remover_valor(&lista, 1);
    exibir(lista);
    printf("\n");
    remover_primeiro(&lista);
    exibir(lista);
    printf("\n");
    remover_ultimo(&lista);
    exibir(lista);

    return 0;
}