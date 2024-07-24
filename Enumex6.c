#include <stdio.h>

typedef enum mes{

    JAN = 1,
    FEV,
    MAR,
    ABR,
    MAI,
    JUN,
    JUL,
    AGO,
    SET,
    OUT,
    NOV,
    DEZ
}Mes;

typedef struct dia{

int dias, ano;
Mes mes;

}Dia;

void preenche (Dia * dia){

printf("Digite a data:\n");
    scanf("%d", &dia->dias); 
printf ("Informe o ano:\n");
    scanf("%d", &dia->ano);

Mes mes;
printf("Meses de 1 a 12: \n");
    scanf("%d",&mes);

switch (mes){

case JAN:
    printf("%d/01/%d\n", dia->dias, dia->ano);
    break;
case FEV:
    printf("%d/02/%d\n", dia->dias, dia->ano);
    break;
case MAR:
    printf("%d/03/%d\n", dia->dias, dia->ano);
    break;
case ABR:
    printf("%d/04/%d\n", dia->dias, dia->ano);
    break;
case MAI:
    printf("%d/05/%d\n", dia->dias, dia->ano);
    break;
case JUN:
    printf("%d/06/%d\n", dia->dias, dia->ano);
    break;
case JUL:
    printf("%d/07/%d\n", dia->dias, dia->ano);
    break;
case AGO:
    printf("%d/08/%d\n", dia->dias, dia->ano);
    break;
case SET:
    printf("%d/09/%d\n", dia->dias, dia->ano);
    break;    
case OUT:
    printf("%d/10/%d\n", dia->dias, dia->ano);
    break;
case NOV:
    printf("%d/11/%d\n", dia->dias, dia->ano);
    break;
case DEZ:
    printf("%d/12/%d\n", dia->dias, dia->ano);
    break;    
default:
    printf("Mes nao cadastrado\n");
    break;                       
    }            
}

int main (){

Dia dia;

preenche(&dia);

    return(0);
}