#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valorFixoMensal, taxaDeRendimento, meses, montanteFinal;
    printf("Digite o Valor Fixo Mental, a Taxa de Rendimento e a Quantidade de Meses, respectivamente na ordem:\n");
    scanf("%f %f %f", &valorFixoMensal, &taxaDeRendimento, &meses);
    montanteFinal = (1 + taxaDeRendimento) * (pow(1 + taxaDeRendimento, meses) - 1) / (taxaDeRendimento) * (valorFixoMensal);
    printf("Seu rendimento de Investimento será de %.2f reais\n", montanteFinal);

    return 0;
}