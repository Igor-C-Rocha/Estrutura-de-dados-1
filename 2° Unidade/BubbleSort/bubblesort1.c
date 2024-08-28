
void bubblesort(int arr[]){
int i, j, aux;

//este vai do primeiro item ate o penultimo item    
for (i = 0; i < TAM; i++){

//este for faz referencia as posições do arr
for (j = 0; j < TAM; j++){

//vai comparar os valores e efetuar as trocas necessarias em seguida    
   if (arr[j] > arr[j+1]){

//o aux recebe o conteudo da primeira posição    
aux = arr[j];

//então a primeira posição recebera o conteudo da proxima posição
arr[j] = arr[j+1];

//e a proxima posição recebe o conteudo do aux q era da primeira posição
arr[j+1] = aux;
            }
        }
    }
}