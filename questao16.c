// Escreva um programa que calcule e liste todos os n´umeros primos de 1 a 1000000.
#include <stdio.h>

main(){
    int divisores;

    for (int i = 1; i <= 1000000; i++) {
        divisores = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d\n", i);
        }
    }
}