#include <stdio.h>
#include <stdlib.h>
#define N 3

typedef struct
{   int dia;
    int mes;
    int anio;
} TFecha;

int main()
{
    TFecha fechas[N] = {{11, 12, 2019},
                        {1, 3, 2016},
                        {23, 11, 2018}  };
    TFecha *ptr;
    ptr = &fechas[0];

    printf("Direccion del comienzo del arreglo: %p\n", ptr);
    for (int i=0; i<N; i++)
    {   printf("Fecha %d: ", i+1);
        printf("%d/%d/%d\n", (ptr+i)->dia, ptr[i].mes, ptr[i].anio);
    }
}

