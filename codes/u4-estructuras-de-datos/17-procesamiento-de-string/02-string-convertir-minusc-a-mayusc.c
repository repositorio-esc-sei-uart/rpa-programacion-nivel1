#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LONGITUD 20

void convertir_a_mayusculas(char cad[LONGITUD]);

int main()
{
    char palabra[LONGITUD];

    printf("\nIngrese una palabra en minusculas: ");
    gets(palabra);
    fflush(stdin);
    printf("Longitud de la palabra %s es %d", palabra, strlen(palabra));

    convertir_a_mayusculas(palabra);
    printf("\nLa palabra convertida a mayusculas: %s\n", palabra);
}

void convertir_a_mayusculas(char cad[LONGITUD])
{
    int i;
    for(i = 0; i < LONGITUD; i++)
        cad[i] = toupper(cad[i]);
}

