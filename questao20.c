// Escreva um programa que calcule o MMC (m´ınimo m´ultiplo comum) entre dois n´umeros.
#include <stdio.h>
main(){
    int n1, n2, resto, a;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    for(a = 1; a>0; a++){
        resto = (n1*a) % n2;
        if(resto == 0) break;
    }
    printf("O MMC entre %d %d e: %d\n", n1, n2, n1 * a);
}
