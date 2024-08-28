#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void bubblesort(int arr[]){

int i, j, aux;
    for(i = 1; i < TAM; i++){
        for(j = 0; j < TAM - i; j++){
// Trocar se o elemento encontrado for maior que o próximo
            if(arr[j] > arr[j + 1]){
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
// Último elemento já esta na posição correta
            }
        }
    }
}

void print(int arr[]){

int i;
    for(i = 0; i < TAM; i++){
        printf("%2d ", arr[i]);
    }
}

int main(){

int arr[TAM] = {9, 5, 10, 2, 0};
    bubblesort(arr);
    print(arr);

return 0;
}