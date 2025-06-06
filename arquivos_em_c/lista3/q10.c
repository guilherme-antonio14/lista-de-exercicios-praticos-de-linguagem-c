#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int horario = time(NULL);
    srand(horario);
    printf("Sua placa de carro: ");

    for(int i = 0; i < 3; i++){
        char n = rand() % 26 + 'a';
        printf("%c",n);
    }
    for(int i = 0; i < 4; i++){
        int n = rand() % 10;
        printf("%d", n);
    }

    return 0;
}