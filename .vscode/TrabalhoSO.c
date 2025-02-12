#include <stdio.h>
#include <stdlib.h>

// Páginas do HD
#define HD 5
// Espaço da RAM
#define RAM 3

// Simulação da RAM
typedef struct{
    int pagina;
// Contador do LRU
    int menos;

}RA;

// Inicia a RAM
void iniciarRA(RA * ram){
    for(int i = 0; i < RAM; i++){
// A RAM ira iniciar vazia
        ram[i].pagina = -1;  
        ram[i].menos = -1;
    }
}

// Informa o conteúdo presente na RAM
void infoRA(RA * ram){
    printf("Conteudo da RAM:\n");
    for(int i = 0; i < RAM; i++){
        if(ram[i].pagina == -1){
            printf("Slot %d: Vazio\n", i);
        } else{
            printf("Slot %d: Pagina %d (Ultimo uso: %d)\n", i, ram[i].pagina, ram[i].menos);
        }
    }
}

// Informa o conteúdo presente no HD
void infoHD(int * hd){
    printf("Conteudo do HD:\n");
    for(int i = 0; i < HD; i++){
        printf("Pagina %d\n", hd[i]);
    }
}

// A função ira verificar se a uma página na RAM
int paginaram(RA * ram, int pagi, int tempo){
    for(int i = 0; i < RAM; i++){
        if(ram[i].pagina == pagi){
// Atualizará o tempo de utilização 
            ram[i].menos = tempo;
        return 1;
        }
    }
    return 0;
}

// Substituirá a página através do sistema LRU
void lru(RA * ram, int pagi, int tempo){
    int lru_index = 0;
    int min_tempo = ram[0].menos;

// Encontra a página LRU
    for(int i = 1; i < RAM; i++){
        if(ram[i].menos < min_tempo){
            min_tempo = ram[i].menos;
            lru_index = i;
        }
    }

// Substitui as páginas
    printf("\n");
    printf("Substituindo pagina %d por pagina %d\n", ram[lru_index].pagina, pagi);
    ram[lru_index].pagina = pagi;
    ram[lru_index].menos = tempo;
}

void menu(){

// Conteudo do HD
    int hd[HD] = {0, 1, 2, 3, 4};
// Páginas na RAM
    RA ram[RAM];
// Contador que simula o LRU
    int tempo = 0; 

    iniciarRA(ram);
int ru, pagi;

    while(1){
        printf("\n");
        printf("1. Ver RAM\n");
        printf("2. Ver HD\n");
        printf("3. Acessar pagina\n");
        printf("4. Sair\n");
        printf("Informe sua opcao:\n");
        scanf("%d", &ru);

    switch (ru){
        case 1:
            infoRA(ram);
        break;
        case 2:
            infoHD(hd);
        break;
        case 3:
            printf("Digite o numero da pagina que deseja acessar:");
            scanf("%d", &pagi);
                if(pagi < 0 || pagi >= HD){
                    printf("Pagina invalida!\n");
        break;
                }
// Incrementa tempo para simular o LRU
                tempo++;
                if(paginaram(ram, pagi, tempo)){
                    printf("\n");
                    printf("Pagina %d ja se encontra na RAM\n", pagi);
                    printf("Atualizando LRU\n");
                } else{
                    printf("\n");
                    printf("Pagina %d nao se encontra na RAM, substituindo...\n", pagi);
                    lru(ram, pagi, tempo);
                }
        break;
        case 4:
                printf("Saindo...\n");
                exit(0);
        default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }
}

int main(){

    menu();
    return 0;
}