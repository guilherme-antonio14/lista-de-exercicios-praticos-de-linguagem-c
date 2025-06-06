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

    int res, num, num1;
    printf("Digite n e p:\n");
    scanf("%d %d", &num, &num1);
    res = fatoriar(num) / (fatoriar(num1) * fatoriar(num - num1));
    printf("\t%d\n", res);


    return 0;
}

// 4 2 --> 6