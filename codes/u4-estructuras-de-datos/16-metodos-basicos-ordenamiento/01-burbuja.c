#include <stdio.h>
#define MAXV 4

void ordenburbuja(int v[MAXV]);
void mostrar(int v[MAXV]);

int main()
{   int vec[MAXV]={23, 45, 43, 8};
    printf("vector desordenado: ");
    mostrar(vec);
    ordenburbuja(vec);
    printf("vector ordenado: ");
    mostrar(vec);
}

void ordenburbuja(int v[MAXV])
{   int i, j, aux;
    // en cada pasada se mueve un elemento maximo al fondo y
    // van los elementos menos van burbujeando hacia el principio
    for (i=1; i < MAXV; i++)  // MAXV-1 pasadas
    {   printf("pasada %d: \n", i);
        for (j=0 ; j<MAXV-i ; j++)
            if (v[j] > v[j+1])  // comparación de v[j] y v[j+1]
            {   printf(" intercambio v[%d]=%d y v[%d]=%d\n", j, v[j], j+1, v[j+1]);
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        mostrar(v);
    }
}

void mostrar(int v[MAXV])
{
    for (int i=0; i<MAXV; i++)
        printf(" %d ", v[i]);
    printf("\n");
}
