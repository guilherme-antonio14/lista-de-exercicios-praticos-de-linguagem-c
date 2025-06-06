#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int lista[10], i, soma, media;

    for (i = 0; i < 10; i++) {
        printf("Digite um número: \n");
        scanf("%i", &lista[i]);
    }
    for(i = 0; i < 10; i++){
        soma = lista[i] + soma;
    }
    media = soma / 10;
    printf("A média ---> %d", media);

    return 0;
}