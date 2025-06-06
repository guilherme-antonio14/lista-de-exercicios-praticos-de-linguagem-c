/*
 Escreva um programa que calcule e apresente o valor de π (3.14. . . ) através da seguinte
fórmula:
        
Utilize pelo menos 1.000.000 de termos para obter uma precisão de pelo menos 6 casas decimais.
*/
#include <stdio.h>
#include <math.h>

float multiplicar(int limit, float pil){
        for(int n = 0; n < limit; n++) {
        pil += pow(-1, n) / (2 * n + 1);
    }
    return pil;
}

int main() {
    int limites = 1000000; // Limite de números a serem calculados
    float pi = 0.0;
    
    pi = multiplicar(limites, pi);

    printf("pi = %.6f\n", pi * 4); // %.6Lf para imprimir 6 casas decimais
    return 0;
}