#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int lado1, lado2, lado3;

    printf("Escreva as medidas: \n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Errou, tem um lado com valor 0\n");
    } else if (lado1 >= lado2 + lado3 || lado2 >= lado1 + lado3 || lado3 >= lado2 + lado1 ) {
        printf("Errou feio!, tem uma lado tão pequeno que o triangulo não se forma direito\n");
    } else if (lado1 == lado2 && lado1 == lado3){
        printf("Tudo igual esse triangulo, é iquilatero\n");
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("Isoceles\n");
    } else {
        printf("Escaleno\n");
    }









    if(11 == 12 || 11 == 13 || 12 == 13)
    {
        printf("Isoceles");
    }
    else if(11 == 12 && 12 == 13)
    {
        printf("Equilatero");
    } 
    else if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) 
    {
        printf("Errou, tem um lado com valor 0\n");
    }
     else if (lado1 >= lado2 + lado3 || lado2 >= lado1 + lado3 || lado3 >= lado2 + lado1) 
    {
        printf("Errou feio!, tem uma lado tão pequeno que o triangulo não se forma direito\n");
    }

     else
    {
        printf("Escaleno");
    }





    return 0;
}