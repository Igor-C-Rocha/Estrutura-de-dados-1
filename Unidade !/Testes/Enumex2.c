#include <stdio.h>

/*Enum é uma forma de constante*/

typedef enum dias_semana{

    SEGUNDA = 2,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO

}DiasSemana;

int main (){

DiasSemana dias;
    printf("Dia da semana: 2 - 8\t");
    scanf("%d",&dias);
switch (dias){

case SEGUNDA:
    printf("Segunda-feira\n");
    break;
case TERCA:
    printf("Terca-feira\n");
    break;
case QUARTA:
    printf("Quarta-feira\n");
    break;
case QUINTA:
    printf("Quinta-feira\n");
    break;
case SEXTA:
    printf("Sexta-feira\n");
    break;
case SABADO:
    printf("Sabado\n");
    break;
case DOMINGO:
    printf("Domingo\n");
    break;
default:
    printf("Dia nao cadastrado\n");
    break;                       
}            

    return(0);
}