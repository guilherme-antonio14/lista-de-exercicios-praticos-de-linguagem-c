#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float p, po, t, r;
    printf("| Cálculo para Taxa de Crescimento Populacional |\nDigite na ordem respectivamente, o tamanho da populução inicial, do tamanho final da população e o tempo(Em anos): \n");
    scanf("%f %f %f", &po, &p, &t);
    r = log(p/po) / t;

    printf("A taxa de crescimento populacional de %.2f %%\n", r * 100);

    return 0;
}