#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 4
#define COLUMNAS 5

main()
{   int f, c;
    int m[FILAS][COLUMNAS];
    srand(time(0));

    // ciclo externo: recorre todas las filas
    for (f = 0; f < FILAS; f++)
    {   // ciclo interno: recorre todas las columnas de cada fila
        for (c = 0; c < COLUMNAS; c++)
            m[f][c] = 10 + rand()%(41);  // asignación a un elemento
    }
    // muestra en forma matricial
    for (c = 0; c < COLUMNAS; c++) // ciclo externo
    {
        for (f = 0; f < FILAS; f++) { // ciclo interno
            printf(" %d ", m[f][c]);
        }
        printf("\n");  // nueva linea por cada fila
    }
    printf("\n");
    for (f = 0; f < FILAS; f++) // ciclo externo
    {
        for (c = 0; c < COLUMNAS; c++) { // ciclo interno
            printf(" %d ", m[f][c]);
        }
        printf("\n");  // nueva linea por cada fila
    }

    printf("\n");
    for (f = FILAS-1; f >= 0; f--) // ciclo externo
    {
        for (c = 0; c < COLUMNAS; c++) { // ciclo interno
            printf(" %d ", m[f][c]);
        }
        printf("\n");  // nueva linea por cada fila
    }

    printf("\n");
    for (f = FILAS-1; f >= 0; f--) // ciclo externo
    {
        for (c = COLUMNAS-1; c >= 0; c--) { // ciclo interno
            printf(" %d ", m[f][c]);
        }
        printf("\n");  // nueva linea por cada fila
    }
}
