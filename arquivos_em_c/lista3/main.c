#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

void q1(){
    int lado1, lado2, lado3;
    printf("Q1) Escreva as medidas: \n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Errou, tem um lado com valor 0\n");
    } else if (lado1 >= lado2 + lado3 || lado2 >= lado1 + lado3 || lado3 >= lado2 + lado1 ) {
        printf("Errou feio!, tem uma lado tão pequeno que o triangulo não se forma direito\n");
    } else if (lado1 == lado2 && lado1 == lado3){
        printf("É equilatero\n");
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("Isoceles\n");
    } else {
        printf("Escaleno\n");
    }
}

void q2(){
    int i, lista[10];
    for (i = 0; i < 10; i++) {
        printf("Q2) Digite um número: \n");
        scanf("%i", &lista[i]);
    }

    for (i = 0; i < 10; i++) {
        if (lista[i] > 10 ) {
            printf("Números maiores que 10:\n---->\t%d\n", lista[i]);
        } 
    }
}
void q3(){
    int i, lista[10], e = 0;
    for (i = 0; i < 10; i++) {
        printf("Q3) Digite um num: \n");
        scanf("%i", &lista[i]);
    }
    for (i = 0; i < 10; i++){
        if (lista[i] > 10 ) {
            e++;
        }
    }
    printf("%d números foram maiores do que 10.\n", e);
}
void q4(){
    int i, lista[10], maior, menor;

    for (i = 0; i < 10; i++) {
        printf("Q4) Digite um número: \n");
        scanf("%i", &lista[i]);
    }

    for (i = 0; i < 10; i++) {
        if(lista[i] > maior){
            maior = lista[i];
        }
        if(lista[i] < menor){
            menor = lista[i];
        }
    }
    printf("o maior é %d e o menor é %d.\n", maior, menor);
}
void q5(){
    int lista[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Q5)Digite um número: \n");
        scanf("%i", &lista[i]);
    }
    for (i = 0; i < 10; i++){
        if(lista[i] > lista[9]){
            printf("---> %d é maior que o ultimo número %d.\n", lista[i], lista[9]);
        }
    }

}
void q6(){
    int lista[10], i, soma, media;

    for (i = 0; i < 10; i++) {
        printf("Q6) Digite um número: \n");
        scanf("%i", &lista[i]);
    }
    for(i = 0; i < 10; i++){
        soma = lista[i] + soma;
    }
    media = soma / 10;
    printf("A média ---> %d\n", media);

}
void q7(){
    int lista[10], i, soma, media;

    for (i = 0; i < 10; i++) {
        printf("Q7) Digite um número: \n");
        scanf("%i", &lista[i]);
    }
    for(i = 0; i < 10; i++){
        soma = lista[i] + soma;
    }
    media = soma / 10;
    for(int i = 0; i < 10; i++){
        if(lista[i] > media){
            printf("---> %d é maior que a media\n", lista[i]);
        }
    }
}
void q8(){
    int lista[10];
    for (int i = 0; i < 10; i++) {
        printf("Q8) Digite um valor: \n");
        scanf("%i", &lista[i]);
    }
    
    for (int e = 9; e >= 0; e--){
        printf(" %i \n", lista[e]);
    }
    printf("\n");
}
void q9(){
    int horario = time(NULL);
    srand(horario);
    printf("Sua senha: ");
    for(int i = 0; i < 6; i++){
        int n = rand()%10;
        printf("%d ",n);
    }
    printf("\n");
}
void q10(){
    int horario = time(NULL);
    srand(horario);
    printf("Sua placa de carro: ");

    for(int i = 0; i < 3; i++){
        char n = rand() % 26 + 'a';
        printf("%c",n);
    }
    for(int i = 0; i < 4; i++){
        int n = rand() % 10;
        printf("%d", n);
    }
    printf("\n");
}
void q11(){
    int horario = time(NULL);
    int vetor[15];
    srand(horario);
    printf("Seu numero do sorteio: ");
    for(int i = 0; i < 15; i++){
        vetor[i] = rand() % 25 + 1;
        for(int j = 0; j < i; j++){
            if(vetor[i] == vetor[j]){
                vetor[i] = rand() % 25 + 1;
                j = 0;
            }
        }
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
void q12(){
    int horario = time(NULL);
    srand(horario);
    int n = rand() % 101;
    int i;
    do{
        printf("Adivinhe o numero:\n");
        scanf("%i", &i);
        if(i > n){
            printf("Seu número é maior que o número sorteado!!\n");
        } 
        else if(i < n){
            printf("Seu número é menor que o número sorteado!!\n");
        }
        else{
            printf("Acertou!! %d\n", i);
        }
    }while(i != n);
    printf("\n");
} 
void q13(){

    float x2, x1, y1, y2, distancia;
    printf("Digite os valores dos pares de x e y:\n");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distância: %.2f\n", distancia);
    
}
void q14(){

    float valorFixoMensal, taxaDeRendimento, meses, montanteFinal;
    printf("Digite o Valor Fixo Mental, a Taxa de Rendimento e a Quantidade de Meses, respectivamente na ordem:\n");
    scanf("%f %f %f", &valorFixoMensal, &taxaDeRendimento, &meses);
    montanteFinal = (1 + taxaDeRendimento) * (pow(1 + taxaDeRendimento, meses) - 1) / (taxaDeRendimento) * (valorFixoMensal);
    printf("Seu rendimento de Investimento será de %.2f reais\n", montanteFinal);

}
void q15(){

    double valorFinanciado, taxaJuros, valorParcela;
    int meses;

    printf("Q15) Digite o valor a ser financiado: \n");
    scanf("%lf", &valorFinanciado);
    
    printf("Q15) Digite a taxa de juros ao mes: \n");
    scanf("%lf", &taxaJuros);

    printf("\nPlanos de Pagamento:\n");
    printf("Meses\tValor da Parcela\n");
    
    for (meses = 1; meses <= 10; meses++) {
        valorParcela = (valorFinanciado * taxaJuros) / (1 - (1 / pow(1 + taxaJuros, meses)));      
        printf("%d\t%.2lf\n", meses, valorParcela);
    }
    printf("\n");
}
void q16(){
    char texto1[200], texto2[200];
    printf("Digite o texto 1: \n");
    gets(texto1);
    fflush(stdin);
    printf("Digite o texto 2: \n");
    gets(texto2);
    for(int i=0; i < strlen(texto1); i++){
        texto1[i] = tolower(texto1[i]);
    }
    for(int i=0; i < strlen(texto2); i++){
        texto2[i] = tolower(texto2[i]);
    }
    if(strcmp(texto1, texto2) > 0){
        printf("%s %s\n", texto2, texto1);
    } else if(strcmp(texto2, texto1) > 0){
        printf("%s %s\n", texto1, texto2);
    } else {
        printf("Os dois são iguais\n");
    }
}
void q17(){
    char palavra[200];
    int cont = 0;
    printf("Insira uma frase ou uma palavra, e vou mostrar quantas vogais (a, e, i, o, u) possui:\n");
    fgets(palavra, sizeof(palavra), stdin);
    for(int i = 0; i < strlen(palavra); i++){
        palavra[i] = tolower(palavra[i]);
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            cont++;
        }
    }
    printf("A quantidade de vogais foi de %d\n", cont);
}
void q18(){
    printf("Olá, meu nome é Adolfo Gilson\n");
}

// =========================================================
int dobrar(int db){
    return db * 2;
}

void q19(){
    int dbo, db;
    printf("Digite um número para descobrir o seu dobro:\n");
    scanf("%d", &db);
    dbo = dobrar(db);
    printf("%d x 2 = %d\n", db, dbo);
}

// ==========================================================

// =================================================
int fatoriar(int num){
    int fato, res = num;
    for(fato = 1; res > 1; res = res - 1){
        fato = fato * res;
    }
    return fato;
}
void q20(){
    int res, num;
    printf("Digite o numero para fazer sua fatorial:\n");
    scanf("%d", &num);
    res = fatoriar(num);
    printf("Fatorial é o %d\n", res);
}

void q21(){
    int res, num, num1;
    printf("Digite n e p:\n");
    scanf("%d %d", &num, &num1);
    res = fatoriar(num) / fatoriar(num - num1);
    printf("\t%d\n", res);
}
void q22(){
    int res, num, num1;
    printf("Digite n e p:\n");
    scanf("%d %d", &num, &num1);
    res = fatoriar(num) / (fatoriar(num1) * fatoriar(num - num1));
    printf("\t%d\n", res);
}

// ====================================================

void q23(){
    float qinicial, taxa, tempo, sobras;
    printf("Digite respectivamente na ordem, o quantidade inicial da substância, taxa de desintegração e quantos anos: \n");
    scanf("%f %f %f", &qinicial, &taxa, &tempo);
    sobras = qinicial * exp(-taxa * tempo);
    printf("A masssa final ou a massa que sobrou é de %.2f\n", sobras);
}
void q24(){
    float p, po, t, r;
    printf("| Cálculo para Taxa de Crescimento Populacional |\nDigite na ordem respectivamente, o tamanho da populução inicial, do tamanho final da população e o tempo(Em anos): \n");
    scanf("%f %f %f", &po, &p, &t);
    r = log(p/po) / t;

    printf("A taxa de crescimento populacional de %.2f %%\n", r * 100);
}
void q25(){
    float t, d, h, vo, angulo, g;
    g = 10;
    printf("| Cálculo de lançamento de projéteis |\nInsira a velocidade de lançamento do projétil e o ângulo de lançamento:\n");
    scanf("%f %f", &vo, &angulo);
    angulo = angulo * (M_PI / 180.0);
    d = (pow(vo, 2) * sin(2*angulo)) / g; 
    h = (pow(vo, 2) * pow(sin(angulo), 2)) / (2 * g);
    t = (2 * vo * sin(angulo)) / g;

    printf("\nA altura máxima:\t%.2f\nA distância máxima:\t%.2f\nO tempo:\t%.1f\n", h, d, t);
}
void q26(){
    float a, b, c, x1, x2, delta;
    printf("| Cálculo de equação de segundo grau |\nInsira os valores dos coeficientes a, b e c: \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0){
        printf("Com o 'a = 0', não é uma equação de segundo grau\n");
    }
    delta = (b * b) - (4*a*c);

    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As duas raízes dos coeficientes inseridos são:\nx1:\t%.2f\nx2:\t%.2f\n", x1, x2);
    } else if(delta == 0){
        x1 = (-b) / (2 * a);
        printf("A equação tem uma raiz dupla:\nx:\t%.2f\n", x1);
    } else{
        printf("Não possui raiz real\n");
    }
}
void q27(){
    char texto[200];
    printf("\tCódigo Morse\nInsira uma frase ou uma palavra para transforma-lá em código numérico: \n");
    fflush(stdin);
    gets(texto);

    for(int i = 0; i < strlen(texto); i++)
    {
        texto[i] = tolower(texto[i]);
    }

    for(int i = 0; i < strlen(texto); i++)
    {
        if(texto[i] == 'a')
        {
            printf(".- ");
        }
        else if(texto[i] == 'b')
        {
            printf("-... ");
        }
        else if(texto[i] == 'c')
        {
            printf("-.-. ");
        }
        else if(texto[i] == 'd')
        {
            printf("-.. ");
        }
        else if(texto[i] == 'e')
        {
            printf(". ");
        }
        else if(texto[i] == 'f')
        {
            printf("..-. ");
        }
        else if(texto[i] == 'g')
        {
            printf("--. ");
        }
        else if(texto[i] == 'h')
        {
            printf(".... ");
        }
        else if(texto[i] == 'i')
        {
            printf(".. ");
        }
        else if(texto[i] == 'j')
        {
            printf(".--- ");
        }
        else if(texto[i] == 'k')
        {
            printf("-.- ");
        }
        else if(texto[i] == 'l')
        {
            printf(".-.. ");
        }
        else if(texto[i] == 'm')
        {
            printf("-- ");
        }
        else if(texto[i] == 'n')
        {
            printf("-. ");
        }
        else if(texto[i] == 'o')
        {
            printf("--- ");
        }
        else if(texto[i] == 'p')
        {
            printf(".--. ");
        }
        else if(texto[i] == 'q')
        {
            printf("--.- ");
        }
        else if(texto[i] == 'r')
        {
            printf(".-. ");
        }
        else if(texto[i] == 's')
        {
            printf("... ");
        }
        else if(texto[i] == 't')
        {
            printf("- ");
        }
        else if(texto[i] == 'u')
        {
            printf("..- ");
        }
        else if(texto[i] == 'v')
        {
            printf("...- ");
        }
        else if(texto[i] == 'w')
        {
            printf(".-- ");
        }
        else if(texto[i] == 'x')
        {
            printf("-..- ");
        }
        else if(texto[i] == 'y')
        {
            printf("-.-- ");
        }
        else if(texto[i] == 'z')
        {
            printf("--.. ");
        }
        else if(texto[i] == '0')
        {
            printf("---- ");
        }
        else if(texto[i] == '1')
        {
            printf(".---- ");
        }
        else if(texto[i] == '2')
        {
            printf("..--- ");
        }
        else if(texto[i] == '3')
        {
            printf(". . . - -");
        }
        else if(texto[i] == '4')
        {
            printf("....- ");
        }
        else if(texto[i] == '5')
        {
            printf("..... ");
        }
        else if(texto[i] == '6')
        {
            printf("-.... ");
        }
        else if(texto[i] == '7')
        {
            printf("--... ");
        }
        else if(texto[i] == '8')
        {
            printf("---.. ");
        }
        else if(texto[i] == '9')
        {
            printf("----. ");
        }
        else if(texto[i] == ' ')
        {
            printf("\n");
        }
    }

}

int main(void){
    setlocale(LC_ALL,"Portuguese");
    q1();
    q2();
    q3();
    q4();
    q5();
    q6();
    q7();
    q8();
    q9();
    q10();
    q11();
    q12();
    q13();
    q14();
    q15();
    q16();
    q17();
    q18();
    q19();
    q20();
    q21();
    q22();
    q23();
    q24();
    q25();
    q26();
    q27();

    return 0;
}