#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float x2, x1, y1, y2, distancia;
    printf("Digite os valores dos pares de x e y:\n");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distância: %.2f\n", distancia);

    return 0;
}