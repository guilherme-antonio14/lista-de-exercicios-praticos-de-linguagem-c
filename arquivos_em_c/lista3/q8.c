#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int lista[10];
    for (int i = 0; i < 10; i++) {
        printf("Q8) Digite um valor: \n");
        scanf("%i", &lista[i]);
    }
    printf("==============================\n");
    for (int e = 9; e >= 0; e--){
        printf("%i\n", lista[e]);
    }

    return 0;
}