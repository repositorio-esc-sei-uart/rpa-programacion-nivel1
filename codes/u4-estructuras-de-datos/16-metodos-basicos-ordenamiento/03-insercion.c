#include <stdio.h>
#define MAXV 4
void ordenarInsercion(int v[MAXV]);
void mostrar(int v[MAXV]);

int main()
{   int vec[MAXV]={23, 45, 43, 8};
    printf("vector desordenado: ");
    mostrar(vec);
    ordenarInsercion(vec);
    printf("vector ordenado: ");
    mostrar(vec);
}

void ordenarInsercion(int v[MAXV])
{   int i, j, aux;
    for (i=1; i<MAXV; i++) // MAXV-1 pasadas
    {   printf("pasada %d: \n", i);
        aux = v[i];  // elemento a ubicar de forma ordenada
        j = i-1;
        while(j>=0 && v[j]>aux) // desplazamientos para ubicar a aux
        {   v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;  // inserta v[i] en la posición que le corresponde
        printf(" insercion de v[%d]=%d en posicion %d", i, aux, j+1);
        if(i-j-1 > 0)
            printf(" con %d desplazamientos\n", i-j-1);
        else
            printf(" sin desplazamientos\n");
        mostrar(v);
    }
}

void mostrar(int v[MAXV])
{
    for (int i=0; i<MAXV; i++)
        printf(" %d ", v[i]);
    printf("\n");
}
