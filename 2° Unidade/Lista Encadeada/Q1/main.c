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

    return 0;
}