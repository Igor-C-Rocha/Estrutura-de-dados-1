#include <stdio.h>

/*Enum é uma forma de constante*/

typedef enum dias_semana{

    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO

}DiasSemana;

typedef enum mes{

    JAN,
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
int main (){

DiasSemana dias;
Mes mes;
    printf("Dia da semana: 1 - 7\t");
        scanf("%d",&dias);
    printf("Meses: 1 - 12\t");
        scanf("%d",&mes);

switch (dias){

case SEGUNDA:
    printf("Segunda-feira ");
    break;
case TERCA:
    printf("Terca-feira ");
    break;
case QUARTA:
    printf("Quarta-feira ");
    break;
case QUINTA:
    printf("Quinta-feira ");
    break;
case SEXTA:
    printf("Sexta-feira ");
    break;
case SABADO:
    printf("Sabado ");
    break;
case DOMINGO:
    printf("Domingo ");
    break;
default:
    printf("Dia nao cadastrado\n");
    break;                       
}            

switch (mes){

case JAN:
    printf("Janeiro\n");
    break;
case FEV:
    printf("Fevereiro\n");
    break;
case MAR:
    printf("Marco\n");
    break;
case ABR:
    printf("Abril\n");
    break;
case MAI:
    printf("Maio\n");
    break;
case JUN:
    printf("Junho\n");
    break;
case JUL:
    printf("Julho\n");
    break;
case AGO:
    printf("Agosto\n");
    break;
case SET:
    printf("Setembro\n");
    break;    
case OUT:
    printf("Outrubo\n");
    break;
case NOV:
    printf("Novembro\n");
    break;
case DEZ:
    printf("Dezembro\n");
    break;    
default:
    printf("Mes nao cadastrado\n");
    break;                       
}            

    return(0);
}