#include <stdio.h>

int main(){

//cria um arquivo "arquivo.txt"
 FILE * arquivo;
char texto_arquivo[100]; 
  arquivo = fopen("arquivo.txt", "w");
if(arquivo == NULL){
    printf("Nao foi possivel criar o arquivo\n");
  exit(1);  
 }
 else{
    printf("arquivo criado com sucesso\n");
 }

//escreve no arquivo e fechando
 fprintf(arquivo, "Hello world!");
 fclose(arquivo);

//lendo os texto do arquivo
 arquivo = fopen("arquivo.txt", "r");
 fscanf(arquivo, " %[^\n]", texto_arquivo);
 printf("texto no arquivo: %s\n", texto_arquivo);

//fecha o arquivo 
 fclose(arquivo);

    return 0;
}   