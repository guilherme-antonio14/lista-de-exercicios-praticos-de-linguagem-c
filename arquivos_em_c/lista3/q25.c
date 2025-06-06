#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float t, d, h, vo, angulo, g;
    g = 10;
    printf("| Cálculo de lançamento de projéteis |\nInsira a velocidade de lançamento do projétil e o ângulo de lançamento:\n");
    scanf("%f %f", &vo, &angulo);
    angulo = angulo * (M_PI / 180.0);
    d = (pow(vo, 2) * sin(2*angulo)) / g; 
    h = (pow(vo, 2) * pow(sin(angulo), 2)) / (2 * g);
    t = (2 * vo * sin(angulo)) / g;

    printf("\nA altura máxima:\t%.2f\nA distância máxima:\t%.2f\nO tempo:\t%.1f\n", h, d, t);

    return 0;
}