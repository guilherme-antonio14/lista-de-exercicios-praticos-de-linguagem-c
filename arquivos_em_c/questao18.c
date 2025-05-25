// Escreva um programa que receba um n´umero do usu´ario e fa¸ca a sua decomposi¸c˜ao em fatores primos. Exemplo: O usu´ario entra o n´umero “60”, o programa apresenta: “2 2 3 5”.
#include <stdio.h>

void decompor(int n) {
    int div = 2;
    printf("Decomposicao em fatores primos e: ");
    while (n > 1) {
        while (n % div == 0) {
            printf("%d ", div);
            n = n / div;
        }
        div++;
    }
    printf("\n");
}

main() {
    int num;

    printf("Digite um numero ai: \n");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O que vc digitou é menor que 0\n");
    } else {
        decompor(num);
    }

}
