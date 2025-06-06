#include <stdio.h>

int main(){
    float consumo, total = 0, totaldototal;
    for(int i = 0; i < 12; i++){
        printf("Quantos litros vc consumiu no mes %d:\n", i + 1);
        scanf("%f", &consumo);
        total = total + consumo;
    }
    totaldototal = total / 12;
    
    printf("Seu consumo por mes e de %.2f Litros Mensal", totaldototal);

    return 0;
}