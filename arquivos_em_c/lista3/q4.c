#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL,"Portuguese");
    int i, lista[10], maior, menor;

    for (i = 0; i < 10; i++) {
        printf("Digite um número: \n");
        scanf("%i", &lista[i]);
    }

    for (i = 0; i < 10; i++) {
        if(lista[i] > maior){
            maior = lista[i];
        }
        if(lista[i] < menor){
            menor = lista[i];
        }
    }
    printf("o maior é %d e o menor é %d", maior, menor);

    return 0;
}