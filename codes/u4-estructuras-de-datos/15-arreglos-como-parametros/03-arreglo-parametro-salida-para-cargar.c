#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 10

void cargar(int v[MAXV]);

int main()
{
    int vec[MAXV], i;
    srand(time(0));

    cargar(vec);

    printf("Contenido de vector cargado por funcion:\n");
    for (i = 0; i < MAXV; i++)
        printf(" %d ", vec[i]);
}

void cargar(int v[MAXV])
{
    int i;
    for (i = 0; i < MAXV; i++)
        v[i] = 10+rand()%51;
}
