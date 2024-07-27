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

int main (){

DiasSemana dias;
dias = SEGUNDA;
    printf("Dia da semana: %d\n", dias);

    return(0);
}