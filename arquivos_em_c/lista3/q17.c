#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
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
    return 0;
}