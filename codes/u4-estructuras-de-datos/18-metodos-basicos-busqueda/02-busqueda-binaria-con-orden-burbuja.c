#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 10

void cargar(int v[MAXV]);
void mostrar(int v[MAXV]);
int buscarbinaria(int v[MAXV], int clave);
void ordenburbuja(int v[MAXV]);

int main()
{
    int vec[MAXV], index, x=15;
    srand(time(0));
    cargar(vec);
    mostrar(vec);
    ordenburbuja(vec);
    mostrar(vec);
    index = buscarbinaria(vec, x);
    if (index==-1)
        printf("%d no se encontro\n", x);
    else
        printf("%d se encuentra en la posición %d\n", x, index);
}

void cargar(int v[MAXV])
{
    for (int i = 0; i < MAXV; i++)
        v[i] = 10+rand()%21;
}

void mostrar(int v[MAXV])
{
    for (int i=0; i<MAXV; i++)
        printf(" %d ", v[i]);
    printf("\n");
}

int buscarbinaria(int v[MAXV], int clave)
{   int central, ini, fin, pos;

    ini = 0;
    fin = MAXV-1;
    pos = -1;  // clave no encontrada aun
    while(ini < fin)
    {
        central = (ini+fin)/2;  // posición central de cada sub-arreglo
        if (v[central] == clave)
        {   pos = central;
            ini = fin;
        }
        else
            if(clave < v[central])  // secciona en subarreglo
                fin = central - 1;
            else
                ini = central + 1;
    }
    return pos;
}

void ordenburbuja(int v[MAXV])
{   int i, j, aux;
    // en cada pasada se mueve un elemento maximo al fondo y
    // van los elementos menos van burbujeando hacia el principio
    for (i=1; i < MAXV; i++)  // MAXV-1 pasadas
    {
        for (j=0 ; j<MAXV-i ; j++)
            if (v[j] > v[j+1])  // comparación de v[j] y v[j+1]
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
    }
}
