#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int lista[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um número: \n");
        scanf("%i", &lista[i]);
    }
    for (i = 0; i < 10; i++){
        if(lista[i] > lista[9]){
            printf("---> %d é maior que o ultimo número %d.\n", lista[i], lista[9]);
        }
    }

    return 0;
}