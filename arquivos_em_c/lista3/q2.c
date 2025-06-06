#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int i, lista[10];
    for (i = 0; i < 10; i++) {
        printf("Digite um número: \n");
        scanf("%i", &lista[i]);
    }

    for (i = 0; i < 10; i++) {
        if (lista[i] > 10 ) {
            printf("---->\t%d\n", lista[i]);
        }
    }

    return 0;
}