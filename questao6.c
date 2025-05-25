#include <stdio.h>

main(){
    int op = 0;
    float num1, num2;
    while(op != 5){
    printf("digite uma opcao ai\n1: soma\n2: subtracao\n3: multiplicacao\n4: divisao\n5: Sair\n");
    scanf("%d", &op);
    switch(op){
        case 1:
            printf("Digite os numeros na ordem:\n");
            scanf("%f %f", &num1, &num2);
            printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Digite os numeros na ordem:\n");
            scanf("%f %f", &num1, &num2);
            printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Digite os numeros na ordem:\n");
            scanf("%f %f", &num1, &num2);
            printf("%.1f * %.1f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("Digite os numeros na ordem:\n");
            scanf("%f %f", &num1, &num2);
            printf("%.1f / %.1f = %.2f\n", num1, num2, num1 / num2);
            break;
        case 5:
            printf("Saiu");
            break;
        default:
            printf("Deu ruim!!");
    }
    }
}