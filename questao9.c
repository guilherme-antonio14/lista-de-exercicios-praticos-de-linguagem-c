#include <stdio.h>

main(){
    int seg, min, hr, res;
    printf("Quantos segundos:\n");
    scanf("%d", &seg);
    // pega 60 x 60 = 3600 e divide pelo seg
    hr = seg / 3600;
    // resto da divisão
    res = seg % 3600;
    min = res / 60;
    seg = res % 60;
    printf("%d horas %d minutos %d segundos\n", hr, min, seg);
}