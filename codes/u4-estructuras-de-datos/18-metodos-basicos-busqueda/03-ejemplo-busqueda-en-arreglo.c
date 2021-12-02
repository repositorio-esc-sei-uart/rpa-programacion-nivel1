#include <stdio.h>
#define MAXV 10

void mostrar(int v[MAXV]);
void ordenburbuja(int v[MAXV]);
int buscarsecuencial(int v[MAXV], int clave);
int buscarbinaria(int v[MAXV], int clave);

int main()
{   int vec[MAXV] = {34, 65, 12, 33, 87, 45, 34, 90, 56, 44};
    int posicion, x = 33, y=90;
    printf("\nVector original: \n");
    mostrar(vec);
    printf("\nBusqueda secuencial: \n");
    posicion = buscarsecuencial(vec, x);
    if (posicion == -1)
        printf(" %d no se encontro\n", x);
    else
        printf(" %d se encuentra en posicion %d\n", x, posicion);

    ordenburbuja(vec);
    printf("\nVector ordenado: \n");
    mostrar(vec);
    printf("\nBusqueda binaria: \n");
    posicion = buscarbinaria(vec, y);
    if (posicion == -1)
        printf(" %d no se encontro\n", y);
    else
        printf(" %d se encuentra en posicion %d\n", y, posicion);
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

int buscarsecuencial(int v[MAXV], int clave)
{   int i, pos;

    pos = -1;  // -1 indica que aun no se encontro la clave
    // recorrer secuencialmente el arreglo hasta que se encuentre la clave
    for(i=0; (i < MAXV) && (pos == -1); i++)
    {
        if(v[i]==clave)
            pos = i;
    }

    return pos;
}

int buscarbinaria(int v[MAXV], int clave)
{   int central, ini, fin, pos;

    ini = 0;
    fin = MAXV-1;
    pos = -1;  // clave no encontrada aun
    while(ini <= fin)
    {
        central = (ini+fin)/2;  // posición central de cada sub-arreglo
        if (v[central] == clave)
        {   pos = central;
            ini = fin + 1;
        }
        else
            if(clave < v[central])
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
