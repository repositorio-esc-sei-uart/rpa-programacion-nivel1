#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 10

int main()
{
    int pares[MAXV];
    int i, iteraciones, aleatorio;
    srand(time(0));

    iteraciones = 0;
    i = 0;
    while (i < MAXV)  // equivalente a i <= MAXV-1
    {   aleatorio = 10 + rand()%(91);
        if( (aleatorio % 2) == 0)  // el aleatorio es par?
        {   pares[i] = aleatorio;
            i++;  // mover indice del vector
        }
        iteraciones++;
    }

    printf("La cantidad de aleatorios generados es %d \n", iteraciones);
    printf("Los %d pares cargados al vector son: \n", MAXV);
    for (i=0; i<MAXV; i++)
        printf(" %d ", pares[i]);
    printf("\n");
}
