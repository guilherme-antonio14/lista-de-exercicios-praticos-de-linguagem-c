#include <stdio.h>

main(){
    int num1, num2, num3, maior, menor, mediano;
    printf("Digite ai 3 numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // começar ver pelo menor num1
    if(num1 <= num2 && num1 <= num3){
        menor = num1;
        // eu já tenho o menor, só falta o medio e o maior
        if (num2 <= num3){
            maior = num3;
            mediano = num2;
        } else{
            maior = num2;
            mediano = num3;
        }
        // aqui repete a lógica

    }
    // aqui pelo num2
    if(num2 <= num1 && num2 <= num3){
        menor = num2;
        if(num1 <= num3){
            maior = num3;
            mediano = num1;
        } else{
            maior = num1;
            mediano = num3;
        }

    }
    if(num3 <= num2 && num3 <= num1){
        menor = num3;
        if(num1 <= num2){
            maior = num2;
            mediano = num1;
        } else{
            maior = num1;
            mediano = num2;
        }

    }
    printf("Maior %d\nMediano: %d\nMenor: %d\n", maior, mediano, menor);
}