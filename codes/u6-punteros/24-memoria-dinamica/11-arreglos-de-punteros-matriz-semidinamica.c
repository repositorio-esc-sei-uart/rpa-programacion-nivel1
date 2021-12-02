#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 4

int main()
{   int i, j;
    int *ptr[N];
    srand(time(0));

    // inicializaci�n de punteros con memoria din�mica
    for (i = 0; i < N; i++)
        ptr[i] = (int *) malloc(M * sizeof(int));

    // acceso a cada elemento de vectores din�micos
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            ptr[i][j] = rand()%40;

    printf("Vectores fila en memoria dinamica: \n");
    for (i = 0; i < N; i++)
    {   printf("ptr[%d] %p: ", i, ptr[i]);
        for (j = 0; j < M; j++)
            printf("%4d", ptr[i][j]);
        printf("\n");
    }
}
