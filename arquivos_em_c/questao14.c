/*
    : Escreva um programa que apresente os 50 primeiros números da série de Fibonacci. A
série de Fibonacci é uma série em que o valor de um elemento é dado pela soma dos dois elementos
logo anteriores. Os dois primeiros termos da série de Fibonacci são iguais a 1. Os outros termos
todos podem ser calculados pela fórmula Fn = Fn−1 + Fn−2:

*/

#include <stdio.h>

main(){
    long long int a, b, limit, fi;
    a = 0; // primeiro 
    b = 1; // segundo
    limit = 50; // limite max.
    for(int i = 0; i < limit; i++){
        fi = a + b;
        a = b;
        b = fi;
        printf("%lli\n", fi);
    }

}