#include <stdio.h>

main(){
    float valor;
    printf("Digite ai quantos reais: \n");
    scanf("%f", &valor);

    while(valor > 100){
        valor -= 100;
        printf("1 Nota 100 reais\n");
    }
    while(valor > 50){
        valor -= 50;
        printf("1 Nota 50 reais\n");
    }
    while(valor > 25){
        valor -= 25;
        printf("1 Nota 25 reais\n");
    }
    while(valor > 10){
        valor -= 10;
        printf("1 Nota 10 reais\n");
    }
    while(valor > 5){
        valor -= 5;
        printf("1 Nota 5 reais\n");
    }
    while(valor > 2){
        valor -= 2;
        printf("1 Nota 2 reais\n");
    }
    while(valor > 1){
        valor -= 1;
        printf("1 Moeda 1 real\n");
    }
    while(valor > 0.50){
        valor -= 0.50;
        printf("1 Nota 50 centavos\n");
    }
    while(valor > 0.25){
        valor -= 0.25;
        printf("1 Nota 25 centavos\n");
    }
    while(valor > 0.10){
        valor -= 0.10;
        printf("1 Nota 10 centavos\n");
    }
    while(valor > 0.05){
        valor -= 0.05;
        printf("1 Nota 5 centavos\n");
    }
    while(valor > 0.01){
        valor -= 0.01;
        printf("1 Nota 1 centavo\n");
    }

}