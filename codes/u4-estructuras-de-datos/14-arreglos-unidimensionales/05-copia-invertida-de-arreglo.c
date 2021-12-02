#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 10
int main()
{
    int arreglo[MAXV], invertido[MAXV];
    int i,j;

    for (i = 0; i < MAXV; i++)
        arreglo[i] = rand()%20;

    printf("\n arreglo original: ");
    for (i = 0; i < MAXV; i++)
        printf(" %d ", arreglo[i]);

    for (i = 0, j=MAXV-1; i < MAXV; i++)
    {
        invertido[i] = arreglo[j];
        j--;
    }

    printf("\n arreglo invertido: ");
    for (i = 0; i < MAXV; i++)
        printf(" %d ", invertido[i]);
    printf("\n");
}
