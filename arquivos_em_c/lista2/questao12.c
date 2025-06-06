#include <stdio.h>
/*
    Escreva um programa que calcule o fatorial de um numero.

*/
main(){
    int res, fato, rep;
    printf("Digite um numero para fazer a sua fatorial: \n");
    scanf("%d", &res);
    for(fato = 1; res > 1; res = res  - 1){
        fato = fato * res;
    }
    printf("%d",fato);
}