#include <stdio.h>
#include <stdlib.h>

FILE * open_file(char * nome, char * modo){

   FILE * arquivo = fopen(nome, modo);
      if(arquivo == NULL){
   printf("Nao foi possivel abrir o arquivo\n");
    exit(1);
 }else{
   printf("Arquivo aberto com sucesso\n");
 }   
   return arquivo;
}

int main(){

 FILE * Nota, * Nota_final;
 Nota = open_file("Nota.txt", "r"); // Ler o arquivo de entrada
 Nota_final = open_file("Nota_final.txt", "w"); // Cria o arquivo de saida

// Ler os dados dentro do arquivo fgets, fgetc, fscanf, sscanf
float n1, n2, n3, media;
char nome;
while (!feof(Nota)){
//ler os dados do arquivo   
   fscanf(Nota, " %[^\t]\t%f\t%f\t%f\n", nome, &n1, &n2, &n3);

//calcula a media   
   media = (n1+n2+n3)/3.0;

if(media >= 7){
//escreve no arquivo de saida
   fprintf(Nota_final, "%s\t%1.f\t Aprovado\n", nome, media);
 }else{
   fprintf(Nota_final, "%s\t%1.f\t Reprovado\n", nome, media);
   }

fclose(Nota);
fclose(Nota_final);

    return 0;
   }
}