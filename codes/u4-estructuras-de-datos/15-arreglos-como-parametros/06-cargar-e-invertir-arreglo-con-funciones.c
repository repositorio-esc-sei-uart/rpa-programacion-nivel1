#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 10

void cargar(int v[MAXV]);
void mostrar(int v[MAXV]);
void invertir(int original[MAXV], int resultado[MAXV]);

int main()
{   int arreglo[MAXV], invertido[MAXV];
    srand(time(0));
    cargar(arreglo);

    printf("\n arreglo original: ");
    mostrar(arreglo);

    invertir(arreglo, invertido);

    printf("\n arreglo invertido: ");
    mostrar(invertido);
    printf("\n comprobar contenido arreglo original: ");
    mostrar(arreglo);
}

void invertir(int original[MAXV], int resultado[MAXV])
{   // original: parametro de entrada
    // resultado: parametro de salida
    int i, j;
    for (i = 0, j=MAXV-1; i < MAXV; i++)
    {   resultado[i] = original[j];
        j--;
    }
}

void cargar(int v[MAXV])
{
    for (int i = 0; i < MAXV; i++)
        v[i] = rand()%20;
}

void mostrar(int v[MAXV])
{
    for (int i = 0; i < MAXV; i++)
        printf(" %d ", v[i]);
}
