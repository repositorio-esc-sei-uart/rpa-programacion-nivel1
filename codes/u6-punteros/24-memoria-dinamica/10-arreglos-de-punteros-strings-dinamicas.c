#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define LONGITUD 20

int main()
{   int i;
    char *palabras[N];

    for (i = 0; i < N; i++)
        palabras[i] = (char *) malloc(LONGITUD * sizeof(char));

    for (i = 0; i < N; i++)
    {   fflush(stdin);
        printf("Ingrese palabra %d: ", i+1);
        gets(palabras[i]);
    }

    printf("\nCadenas almacenadas en memoria dinamica: \n");
    for (i = 0; i < N; i++)
        printf("Direccion %p: %s\n", palabras[i], palabras[i]);
}
