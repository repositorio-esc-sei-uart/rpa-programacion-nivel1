#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 10

void mostrar(int v[MAXV]);

int main()
{
    int vec[MAXV], i;
    srand(time(0));

    for (i = 0; i < MAXV; i++)
        vec[i] = 10+rand()%51;

    printf("Contenido de vector cargado con aleatorios:\n");
    mostrar(vec);
}

void mostrar(int v[MAXV])
{
    int i;
    for (i = 0; i < MAXV; i++)
        printf(" %d ", v[i]);
}

