#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 10

void cargar(int v[MAXV]);
void mostrar(int v[MAXV]);

int main()
{
    int vec[MAXV], i;
    srand(time(0));

    cargar(vec);
    printf("Contenido de vector cargado con aleatorios:\n");
    mostrar(vec);
}

void mostrar(int v[MAXV])
{
    for (int i = 0; i < MAXV; i++)
        printf(" %d ", v[i]);
}

void cargar(int v[MAXV])
{
    for (int i = 0; i < MAXV; i++)
        v[i] = 10+rand()%51;
}
