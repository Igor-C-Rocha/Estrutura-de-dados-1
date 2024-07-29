#include <stdio.h>
#include <stdlib.h>
#include "aluno.c"

int main(){

Aluno * aluno = (Aluno*)malloc(sizeof(Aluno));
if (aluno == NULL){
    exit (1);
    }

preenche(aluno);
imprime(aluno);
free(aluno);

    return 0;
}

/*
Os mósulos peermitem "esconder" as imformações das funções.
Para compilar gcc -c aluno.c, 
gcc -c main.c,
gcc -o main.exe aluno.o main.o,
gcc main.c -o main, 
./main
*/