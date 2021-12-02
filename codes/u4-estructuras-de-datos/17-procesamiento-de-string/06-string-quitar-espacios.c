#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXLONGITUD 60

void quitarespacios(char original[MAXLONGITUD], char destino[MAXLONGITUD]);

int main()
{
    char frase[MAXLONGITUD];
    char frasesinespacios[MAXLONGITUD];
    printf("Ingrese una frase o palabra: ");
    gets(frase);

    quitarespacios(frase, frasesinespacios);
    printf("frase sin espacios: %s", frasesinespacios);
}


void quitarespacios(char original[MAXLONGITUD], char destino[MAXLONGITUD])
{
    int largo = strlen(original);
    int i=0, j=0;

    while (i<largo) {
        if(!isblank(original[i])) // función de ctype.h que equivale a: if(original[i] != ' ')
        {
            destino[j] = original[i];
            j++;
        }
        i++;
    }
    destino[j]='\0';  // terminador nulo para fin de cadena
}
