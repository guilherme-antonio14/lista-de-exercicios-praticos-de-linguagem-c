#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int i, lista[10], e = 0;
    for (i = 0; i < 10; i++) {
        printf("Digite um num: \n");
        scanf("%i", &lista[i]);
    }
    for (i = 0; i < 10; i++){
        if (lista[i] > 10 ) {
            e++;
        }
    }
    printf("%d números foram maiores do que 10.", e);

}