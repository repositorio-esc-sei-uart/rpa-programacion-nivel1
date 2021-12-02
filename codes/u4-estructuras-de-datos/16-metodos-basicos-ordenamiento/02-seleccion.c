#include <stdio.h>
#define MAXV 4
void ordenarSeleccion(int v[MAXV]);
void mostrar(int v[MAXV]);

int main()
{   int vec[MAXV]={23, 45, 43, 8};
    printf("vector desordenado: ");
    mostrar(vec);
    ordenarSeleccion(vec);
    printf("vector ordenado: ");
    mostrar(vec);
}

void ordenarSeleccion(int v[MAXV])
{   int posmenor, i, j, aux;

    for (i = 0; i < MAXV-1; i++)  // MAXV-1 pasadas
    {   printf("pasada %d: \n", i+1);
        posmenor = i;
        for (j=i+1; j<MAXV; j++)  // seleccionar el menor de la pasada
            if (v[j] < v[posmenor])  // < orden creciente  --  > orden decreciente
                posmenor = j;

        printf(" intercambio entre el de %d# posicion v[%d]=%d", i+1, i, v[i]);
        printf(" y el %d# menor v[%d]=%d \n", i+1, posmenor, v[posmenor]);

        aux = v[i];
        v[i] = v[posmenor];
        v[posmenor] = aux;

        mostrar(v);
    }
}

void mostrar(int v[MAXV])
{
    for (int i=0; i<MAXV; i++)
        printf(" %d ", v[i]);
    printf("\n");
}
