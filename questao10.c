#include <stdio.h>
/*
    Escreva um programa que receba o dia e o mˆes e informe a qual esta¸c˜ao do ano esta data
pertence. Exemplo: 25/10 ´e primavera. Lembrando que o ver˜ao come¸ca dia 21 de dezembro, o
outono em 21 de mar¸co, o inverno em 21 de junho e a primavera come¸ca em 23 de setembro.

*/
main(){
    int dia, mes;
    printf("Digite ai, dia e mes:\n");
    scanf("%d %d", &dia, &mes);
    switch(mes){
        case 1:
        case 2:
            printf("e verão");
            break;
        case 3:
            if(dia < 21){
                printf("e verão");
            } else{
                printf("e outono");
            }
            break;
        case 4:
        case 5:
            printf("e outono");
            break;
        case 6:
            if(dia < 21){
                printf("e outono");
            } else{
                printf("e inverno");
            }
            break;
        case 7:
        case 8:
            printf("e inverno");
            break;
        case 9:
            if(dia < 21){
                printf("e inverno");
            }else{
                printf("e primavera");
            }
            break;
        case 10:
        case 11:
            printf("e primavera");
            break;
        case 12:
            if(dia < 21){
                printf("e primavera");
            }else{
                printf("e verão");
            }
    }
}