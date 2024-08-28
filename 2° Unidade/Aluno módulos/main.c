#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main(){

Aluno * aluno = aloca_aluno(); //aloca
preenche(aluno); //preenche
imprime(aluno); //imprime 
free(aluno); //libera memoria 

    return 0;
}

/*
Os mósulos peermitem "esconder" as imformações das funções.
Para compilar:
gcc -c aluno.c, 
gcc -c main.c,
gcc -o main.exe aluno.o main.o,
gcc main.c -o main, 
./main
*/