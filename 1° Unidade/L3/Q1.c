#include <stdio.h>
#include <stdlib.h>

int main (){

int tamanho;

     printf("informe o tamanho do vetor: \t");
         scanf("%d", &tamanho);
int * vetor = (int*) malloc(tamanho * sizeof(int));
if (vetor == NULL){
     printf("sem memoria");
exit(1);

}         
else{
     printf("vetor alocado com sucesso \n");
}
     printf("digite os elementos do vetor");
for(int count = 0; count < tamanho; count++){
         scanf("%d", &vetor[count]);

}     

     printf("vetor inverso:");
for(int count = tamanho-1; count >= 0; count--){
    printf("%d", vetor[count]);
}     
free(vetor);

return(0);    
}