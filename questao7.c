#include <stdio.h>

main(){
    
    int angulo;
    printf("Digite quantos graus:\n");
    scanf("%d", &angulo);

    if (angulo == 0) {
        printf("e angulo nulo\n");
    } else if (angulo > 0 && angulo < 90) {
        printf("e angulo agudo\n");
    } else if (angulo == 90) {
        printf("e angulo reto\n");
    } else if (angulo > 90 && angulo < 180) {
        printf("e angulo obtuso\n");
    } else if (angulo == 180) {
        printf("e angulo raso\n");
    } else if (angulo > 180 && angulo < 360) {
        printf("e angulo concavo\n");
    } else if (angulo == 360) {
        printf("e angulo completo\n");
    } else {
        printf("Colocou ou mais de 360 ou colocou um numero invalido ai\n");
    }

}