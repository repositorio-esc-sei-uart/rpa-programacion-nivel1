#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 5

void cargar1(int *ptr);
void cargar2(int v[TAMA]);
void mostrar(int v[TAMA]);

int main()
{
    int vec[TAMA];
    srand(time(0));

    cargar1(vec);
    mostrar(vec);
    cargar2(vec);
    mostrar(vec);

    return 0;
}


void cargar1(int *ptr)
{
    for (int i=0; i<TAMA; i++)
        ptr[i] = rand()%40;
}

void cargar2(int v[TAMA])
{
    for (int i=0; i<TAMA; i++)
        v[i] = rand()%40;
}


void mostrar(int v[TAMA])
{
    printf("Vector: ");
    for (int i=0; i<TAMA; i++)
        printf(" %d ", v[i]);
    printf("\n");
}
