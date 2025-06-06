#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");
    float a, b, c, x1, x2, delta;
    printf("| Cálculo de equação de segundo grau |\nInsira os valores dos coeficientes a, b e c: \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0){
        printf("Com o 'a = 0', não é uma equação de segundo grau\n");
    }
    delta = (b * b) - (4*a*c);

    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As duas raízes dos coeficientes inseridos são:\nx1:\t%.2f\nx2:\t%.2f\n", x1, x2);
    } else if(delta == 0){
        x1 = (-b) / (2 * a);
        printf("A equação tem uma raiz dupla:\nx:\t%.2f\n", x1);
    } else{
        printf("Não possui raiz real\n");
    }

    return 0;
}