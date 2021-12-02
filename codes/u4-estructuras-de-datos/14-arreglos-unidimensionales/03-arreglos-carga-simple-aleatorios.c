#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 5

void main()
{
    int vecuser[MAXV], vecrandom[MAXV];
    int ind;

    srand(time(0));

    /*
    vecrandom[0] = rand()%21;
    vecrandom[1] = rand()%21;
    vecrandom[2] = rand()%21;
    vecrandom[3] = rand()%21;
    vecrandom[MAXV-1] = rand()%21;
    El patrón en estos pasos repetidos es la variación secuencial del indice [0 a MXV-1]
    */

    // carga de valores al vectores
    for (ind = 0; ind < MAXV; ind++)
        vecrandom[ind] = rand()%21;

    /*
    scanf("%d", &vecuser[0]);
    scanf("%d", &vecuser[1]);
    scanf("%d", &vecuser[2]);
    scanf("%d", &vecuser[3]);
    scanf("%d", &vecuser[MAXV-1]);
    */
    printf("ingrese %d numeros:\n", MAXV);
    for (ind = 0; ind < MAXV; ind++)
        scanf("%d", &vecuser[ind]);

    // mostrar vectores
    printf("\n vector de usuario: ");
    for (ind = 0; ind < MAXV; ind++)
        printf("%3d", vecuser[ind]);

    printf("\n vector aleatorio: ");
    for (ind = 0; ind <= MAXV-1; ind++)
        printf("%3d", vecrandom[ind]);
}
