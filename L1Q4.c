#include <stdio.h>
#include <math.h>

void calcular_hexagono(float l, float *area, float *perimetro){
    *area = (3 * pow(l,2) * sqrt(3)) / 2;
    *perimetro = 6 * l;

}

int main(){

float l, area, perimetro;

    printf("Informe o lado do hexagono: \n");
        scanf("%f", &l);

calcular_hexagono(l, &area, &perimetro);

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    
    return 0;
}