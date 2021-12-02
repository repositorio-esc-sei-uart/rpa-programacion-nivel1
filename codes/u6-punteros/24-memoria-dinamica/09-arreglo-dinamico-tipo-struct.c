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
    TFecha *ptr;

    ptr = (TFecha *)malloc(N * sizeof(TFecha));

    printf("Direccion de arreglo dinamico: %p\n", ptr);
    for (int i=0; i<N; i++)
    {   printf("Ingrese Fecha %d: \n", i+1);
        printf("\t Dia: "); scanf("%d", &(ptr[i].dia) );
        printf("\t Mes: "); scanf("%d", &(ptr[i].mes) );
        printf("\t Anio: "); scanf("%d", &(ptr[i].anio) );
    }
    printf("\n");
    for (int i=0; i<N; i++)
    {   printf("Fecha %d: ", i+1);
        printf("%d/%d/%d\n", ptr[i].dia, ptr[i].mes, ptr[i].anio);
    }
}

