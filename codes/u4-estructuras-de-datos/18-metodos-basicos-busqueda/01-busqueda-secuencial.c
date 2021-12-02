#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXV 10
void cargar(int v[MAXV]);
void mostrar(int v[MAXV]);
int buscarsecuencial(int v[MAXV], int clave);
int busquedasecuencialv2(float v[MAXV], float clave);

int main()
{   int vec[MAXV];
    float f[MAXV]={0.88, 0.67, 0.56, 0.43, 0.66, 0.23, 0.59, 0.28, 0.99, 0.17};
    srand(time(0));
    cargar(vec);
    mostrar(vec);
    printf("Localizar 15: %d\n", buscarsecuencial(vec, 15));
    printf("Localizar 20: %d\n", buscarsecuencialv3(vec, 20));
    //printf("Localizar 0.88: %d\n", buscarsecuencialv3(f, 0.88));
    printf("Localizar 0.66: %d\n", busquedasecuencialv2(f, 0.66));
}

void cargar(int v[MAXV])
{
    for (int i = 0; i < MAXV; i++)
        v[i] = 10+rand()%51;
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


int buscarsecuencialv3(int v[MAXV], int clave)
{   int i, pos;

    pos = -1;  // -1 indica que aun no se encontro la clave
    // recorrer secuencialmente el arreglo hasta que se encuentre la clave
    i=0;
    while( (i < MAXV) && (pos == -1) )
    {
        if(v[i]==clave) {
            pos = i;
        }
        i++;
    }

    return pos;
}


int busquedasecuencialv2(float v[MAXV], float clave)
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

