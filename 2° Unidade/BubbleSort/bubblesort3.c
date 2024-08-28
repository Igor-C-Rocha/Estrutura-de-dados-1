#include <stdio.h>
#include <string.h>

#define MAX 100
#define NUM_NAME 5

void bubblesort(char arr[][MAX], int n){

int i, j;
char aux[MAX];
    for(i = 1; i < n; i++){
        for(j = 0; j < n - 1; j++){
            if(strcmp(arr[j], arr[j + 1]) > 0){
            strcpy(aux, arr[j]);
            strcpy(arr[j], arr[j + 1]);
            strcpy(arr[j + 1], aux);
            }
        }
    }
}

void print(char arr[][MAX], int n){

int i;
    for(i = 0; i < n; i++){
        printf("%s\n\n", arr[i]);
    }
}

int main(){

char arr[][MAX] = {"Enzo","Beatriz","Paulo","Manuela","Rayssa"};  
    bubblesort(arr, NUM_NAME);
    print(arr, NUM_NAME);

    return 0;
}