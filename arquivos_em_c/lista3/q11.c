#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int horario = time(NULL);
    int vetor[15];
    srand(horario);
    printf("Seu numero do sorteio: ");
    for(int i = 0; i < 15; i++){
        vetor[i] = rand() % 25 + 1;
        for(int j = 0; j < i; j++){
            if(vetor[i] == vetor[j]){
                vetor[i] = rand() % 25 + 1;
                j = 0;
            }
        }
        printf("%d ", vetor[i]);
    }
    return 0;
}