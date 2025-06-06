#include <stdio.h>
#include <locale.h>

void q18(){
    printf("Olá, meu nome é Ferreira Dos Santos\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    q18();

    return 0;
}