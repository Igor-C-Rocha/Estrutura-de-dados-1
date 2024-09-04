#include "lista.c"

int main(){

    No * lista = NULL;

    inserir_no_inicio(&lista, 3);
    inserir_no_inicio(&lista, 4);
    inserir_no_final(&lista, 2);
    inserir_no_final(&lista, 1);
    exibir(lista);

    return 0;
}