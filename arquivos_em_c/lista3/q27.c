#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
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

    return 0;
}