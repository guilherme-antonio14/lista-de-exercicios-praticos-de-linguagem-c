#include <stdio.h>
/*
     Escreva um programa que receba dois n´umeros e calcule a o primeiro elevado ao segundo
(opera¸c˜ao de exponencial). Obs.: Crie seu pr´oprio algoritmo que realiza a opera¸c˜ao de exponencia¸c˜ao, sem utilizar a fun¸c˜ao pow() do math.h.
*/
main(){
    int base, exp, pow;
    pow = 1;
    printf("Digite ai na ordem, a base e o expoente:\n");
    scanf("%d %d", &base, &exp);

    for(int i = 0; i < exp; i++){
         pow = pow * base;
    }
    // utilizei o "^" para identificar a exponenciação, que vem do python por curiosidade;
    printf("base e %d e expoente %d\n%d ^ %d = %d", base, exp, base, exp, pow);

}