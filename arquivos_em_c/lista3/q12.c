#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int horario = time(NULL);
    srand(horario);
    int n = rand() % 101;
    int i, e = 0;
    do{
        printf("Adivinhe o numero:\n");
        scanf("%i", &i);
        if(i > n){
            printf("Seu número é maior que o número sorteado!!\n");
            e++;
        } 
        else if(i < n){
            printf("Seu número é menor que o número sorteado!!\n");
            e++;
        }
        else{
            printf("Acertou!! %d\nTentativas:\t%d", i, e);
        }
    }while(i != n);
    printf("\n");
    return 0;
}