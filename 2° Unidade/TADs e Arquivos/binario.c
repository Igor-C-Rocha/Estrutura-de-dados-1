#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Produto
typedef struct{

    int codigo, quantidade;
    char descricao[50];

}Produto;

// Função para criar um novo produto
Produto criarProduto(int codigo, char *descricao[50], int quantidade){
    Produto p;
    p.codigo = codigo;
    strncpy(p.descricao, descricao);
    p.quantidade = quantidade;
    return p;
}

// Função para adicionar um produto ao estoque
void adicionarProdutoAoEstoque(char *nome_arquivo, Produto p){
    FILE *arquivo = fopen(nome_arquivo, "a"); // 'ab' para append binário
    if (arquivo == NULL){
        perror("Não foi possível abrir o arquivo");
        return;
    }
    fwrite(&p, sizeof(Produto), 1, arquivo);
    fclose(arquivo);
}

// Função para remover um produto do estoque baseado no código
void removerProdutoDoEstoque(const char *nome_arquivo, int codigo){
    FILE *arquivo = fopen(nome_arquivo, "r"); // 'r+b' para leitura e escrita binária
    if (arquivo == NULL){
        perror("Não foi possível abrir o arquivo");
        return;
    }

    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        perror("Não foi possível criar arquivo temporário");
        fclose(arquivo);
        return;
    }

    Produto p;
    while (fread(&p, sizeof(Produto), 1, arquivo)){
        if (p.codigo != codigo){
            fwrite(&p, sizeof(Produto), 1, temp);
        }
    }
    fclose(arquivo);
    fclose(temp);

    remove(nome_arquivo);
    rename("temp.bin", nome_arquivo);
}

// Função para atualizar a quantidade em estoque de um produto
void atualizarQuantidadeEstoque(const char *nome_arquivo, int codigo, int nova_quantidade){
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL){
        perror("Não foi possível abrir o arquivo");
        return;
    }

    Produto p;
    while (fread(&p, sizeof(Produto), 1, arquivo)){
        if (p.codigo == codigo){
            p.quantidade = nova_quantidade;
            fseek(arquivo, -sizeof(Produto), SEEK_CUR);
            fwrite(&p, sizeof(Produto), 1, arquivo);
            fclose(arquivo);
            return;
        }
    }
    fclose(arquivo);
    printf("Produto com código %d não encontrado.\n", codigo);
}

// Função para exibir todos os produtos no estoque
void exibirEstoque(const char *nome_arquivo){
 FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        perror("Não foi possível abrir o arquivo");
        return;
 }
Produto p;
    while (fread(&p, sizeof(Produto), 1, arquivo)){
    printf("Código: %d\n", p.codigo);
    printf("Descrição: %s\n", p.descricao);
    printf("Quantidade: %d\n", p.quantidade);
 }
  fclose(arquivo);
}

int main(){
    // Exemplo de uso
    Produto produto1 = criarProduto(101, "Cadeira", 15);
    adicionarProdutoAoEstoque("estoque.txt", produto1);

    Produto produto2 = criarProduto(102, "Mesa", 8);
    adicionarProdutoAoEstoque("estoque.txt", produto2);

    printf("Estoque após adição:\n");
    exibirEstoque("estoque.txt");

    atualizarQuantidadeEstoque("estoque.txt", 101, 20);
    printf("Estoque após atualização:\n");
    exibirEstoque("estoque.txt");

    removerProdutoDoEstoque("estoque.txt", 102);
    printf("Estoque após remoção:\n");
    exibirEstoque("estoque.txt");

    return 0;
}
