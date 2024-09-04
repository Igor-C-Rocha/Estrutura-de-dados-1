#include "lista.c"

int main(){
    No * lista = NULL;

    inserir_inicio(&lista, 2);
    inserir_final(&lista, 3);
    inserir_inicio(&lista, 1);
    inserir_final(&lista, 4);

    exibir_lista(lista);
    remover_primeiro(&lista);
    printf("\n");

    exibir_lista(lista);
    printf("\n");

    int valor = 1;
    int posicao = buscar(lista, valor);
        if(posicao != -1){
            printf("Elemento encontrado na posicao %d\n", posicao);
            printf("\n");
        }else{
            printf("\n");
        }
    remover_valor(&lista, 2);

    exibir_lista(lista);

    inserir_apos(&lista, 4, 5);

    printf("\n");
    exibir_lista(lista);

    return 0;
}