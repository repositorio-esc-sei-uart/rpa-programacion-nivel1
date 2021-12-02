#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int *ptr; //puntero para creacion de arreglo dinámico
    srand(time(0));

    // asignacion de N bloques de memoria dinamica de tipo entero
    ptr = (int *)malloc(N * sizeof(int));

    printf("Direccion del comienzo de asignacion dinamica\n");
    printf("ptr: %p  tamano: %d bytes \n", ptr, N*sizeof(int));

    for (int i=0; i<N; i++)
        ptr[i] = rand()%40;

    printf("\nContenido de direcciones dinamicas\n");
    for (int i=0; i<N; i++)
        printf(" %d ", ptr[i]);
    printf("\n");
}
