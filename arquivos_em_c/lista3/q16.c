#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
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
        printf("%s %s", texto2, texto1);
    } else if(strcmp(texto2, texto1) > 0){
        printf("%s %s", texto1, texto2);
    } else {
        printf("Os dois são iguais");
    }


    return 0;
}