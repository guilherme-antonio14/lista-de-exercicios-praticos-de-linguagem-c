#include <stdio.h>
#include <locale.h>

int q19(int db){
    return db * 2;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int dbo, db;
    printf("Digite um número para descobrir o seu dobro:\n");
    scanf("%d", &db);
    dbo = q19(db);
    printf("%d x 2 = %d\n", db, dbo);

    return 0;
}