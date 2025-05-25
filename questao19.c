// Escreva um programa que calcule o MDC (m´aximo divisor comum) entre dois n´umeros.
#include <stdio.h>

main(){
    int n1, n2, resto, a, b;
    printf("Digite dois numeros ai:\n");
    scanf("%d %d", &n1, &n2);
    a = n1;
    b = n2;
    do{
        resto = a % b;
        a = b;
        b = resto;
    }while(resto != 0);
    printf("O MDC entre %d e %d: %d\n",n1,n2,a);
}