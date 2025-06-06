#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int horario = time(NULL);
    srand(horario);
    printf("Sua senha: ");
    for(int i = 0; i < 6; i++){
        int n = rand()%10;
        printf("%d ",n);
    }

    return 0;
}