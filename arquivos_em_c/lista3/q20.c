#include <stdio.h>
#include <locale.h>

int fatoriar(int num){
    int fato, res = num;
    for(fato = 1; res > 1; res = res - 1){
        fato = fato * res;
    }
    return fato;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int res, num;
    printf("Digite o numero para fazer sua fatorial:\n");
    scanf("%d", &num);
    res = fatoriar(num);
    printf("Fatorial é o %d\n", res);
    return 0;
}