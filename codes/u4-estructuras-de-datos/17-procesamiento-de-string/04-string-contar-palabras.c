#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LARGO 50

int contarPalabras(char s[LARGO]);

int main()
{   char frase[LARGO];

    printf ("ingrese una frase : ");
    gets(frase); fflush(stdin);
    printf("contiene %d palabras\n", contarPalabras(frase));
}

int contarPalabras(char s[LARGO])
{   int palabra = 0;
    for (int i=0; i< strlen(s); i++)
        if (isspace(s[i]))  // if (s[i] == ' ')
            palabra++;
    if(strlen(s) > 0) palabra++;   // o la cadena tiene una palabra o varias
    return(palabra);

}
