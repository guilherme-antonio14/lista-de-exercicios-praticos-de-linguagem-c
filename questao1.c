#include <stdio.h>

int main(){
    float far;
    float conversao;
    printf("Digite em graus Fahrenheit para converter para Celcius: \n");
    scanf("%f", &far);
    conversao = (5.0 / 9.0) * (far - 32);
    printf("%.2f Celcius", conversao);
    
    return 0;
}