#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float valorFinanciado, taxaJuros, valorParcela;
    int meses;

    printf("Q15) Digite o valor a ser financiado e a taxa de juros ao mês: \n");
    scanf("%f %f", &valorFinanciado, &taxaJuros);

    printf("\nPlanos de Pagamento:\n");
    printf("Meses\tValor da Parcela\n");
    
    for (meses = 1; meses <= 10; meses++) {
        valorParcela = (valorFinanciado * taxaJuros) / (1 - (1 / pow(1 + taxaJuros, meses))) ;      
        printf("%d\t%.2f\n", meses, valorParcela);
    }

}