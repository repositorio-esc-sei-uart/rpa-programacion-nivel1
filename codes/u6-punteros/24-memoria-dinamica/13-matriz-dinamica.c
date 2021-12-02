#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 4

int main()
{   int i, j;
    int **matriz;
    srand(time(0));

    // inicializaci�n del puntero doble con el vector filas
    matriz = (int **) malloc(N * sizeof(int *));

    // inicializaci�n de punteros simples (filas) con vectores columnas
    for (i = 0; i < N; i++)
        matriz[i] = (int *) malloc(M * sizeof(int *));

    // acceso a cada elemento de la matriz dinamica
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            matriz[i][j] = rand()%40;

    printf("Matriz dinamica: \n");
    for (i = 0; i < N; i++)
    {   for (j = 0; j < M; j++)
            printf("%4d", matriz[i][j]);
        printf("\n");
    }
}
