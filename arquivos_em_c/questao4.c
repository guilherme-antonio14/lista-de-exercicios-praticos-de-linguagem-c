#include <stdio.h>

main(){
    int num, ver;
    printf("Digite o numero ai e vou adivinhar se ele e par ou n:\n");
    scanf("%d", &num);
    ver = num % 2;
    if(ver == 0){
        printf("Par");
    } else{
        printf("Impar");
    }
}