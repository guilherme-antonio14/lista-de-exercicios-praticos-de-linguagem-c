#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float qinicial, taxa, tempo, sobras;
    printf("Digite respectivamente na ordem, o quantidade inicial da substância, taxa de desintegração e quantos anos: \n");
    scanf("%f %f %f", &qinicial, &taxa, &tempo);
    sobras = qinicial * exp(-taxa * tempo);
    printf("A masssa final ou a massa que sobrou é de %.2f\n", sobras);

    return 0;
}   