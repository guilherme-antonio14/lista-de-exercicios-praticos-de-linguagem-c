// Escreva uma fun¸c˜ao que receba um n´umero e determine se ele ´e primo ou n˜ao.
#include <stdio.h>
int main(){
    int num;

    printf("Digite um numero ai:\n");
    scanf("%d", &num);
    // verificar se o num é menor que 2
    if(num <= 1){
        printf("Nao e primo, pois e menor que 2");
        return 0; // dá a respota assim verdadeiro
    }
    // testar se o numero tem um divisor diferente
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            printf("Nao e primo");
            return 0; // aqui tbm
        }
    }

    printf("%d e primo", num);


    return 0;
}