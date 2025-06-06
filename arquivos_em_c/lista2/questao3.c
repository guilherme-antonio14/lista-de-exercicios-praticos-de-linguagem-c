#include <stdio.h>

main(){
    float lista, semi, pf, mediaf;
    // 2, 3 e 5
    printf("digite ai, sua nota da lista, do seminario e da prova final, na ordem:\n");
    scanf("%f %f %f",&lista, &semi, &pf);
    mediaf = ((lista * 2.0) + (semi * 3.0) + (pf * 5.0)) / (2.0 + 3.0 + 5.0); 
    //         6,5 * 2 13   7,5 * 3 22.5  5,5 * 5 27, 5 -> 6,3
    if(mediaf >= 6){
        printf("Apto | '%f'", mediaf);
    }else{
        printf("Reprovado");
    }

}