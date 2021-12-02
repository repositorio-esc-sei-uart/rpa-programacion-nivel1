#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMENSION 5   //matriz cuadrada

void cargardiagonal(int m[DIMENSION][DIMENSION], int d[DIMENSION]);
void cargarmatriz(int m[DIMENSION][DIMENSION]);
void mostrarmatriz(int m[DIMENSION][DIMENSION]);
void mostrarvector(int v[DIMENSION]);

main()
{   int mat[DIMENSION][DIMENSION], diag[DIMENSION];
    srand(time(0));
    cargarmatriz(mat);
    mostrarmatriz(mat);
    cargardiagonal(mat, diag);
    printf("\nLa diagonal principal es: \n");
    mostrarvector(diag);
}

void cargardiagonal(int m[DIMENSION][DIMENSION], int d[DIMENSION])
{   int f, c;

// Forma 1:

    for (f=0; f<DIMENSION; f++)
        d[f] = m[f][f];

// Forma 2:
/*
    for (f = 0; f < DIMENSION; f++)
    {   // ciclo interno: recorre todas las columnas de cada fila
        for (c = 0; c < DIMENSION; c++)
            if (f == c)
                d[f] = m[f][c];
    }
*/
}

void cargarmatriz(int m[DIMENSION][DIMENSION])
{   int f, c;
    // ciclo externo: recorre todas las filas
    for (f = 0; f < DIMENSION; f++)
    {   // ciclo interno: recorre todas las columnas de cada fila
        for (c = 0; c < DIMENSION; c++)
            m[f][c] = 10 + rand()%(41);  // asignación a un elemento
    }
}
void mostrarmatriz(int m[DIMENSION][DIMENSION])
{   int f, c;
    for (f=0; f<DIMENSION; f++){
        for (c=0; c<DIMENSION; c++)
            printf("%5d", m[f][c]);
        printf("\n");  // nueva linea por cada fila recorrida
    }
}

void mostrarvector(int v[DIMENSION])
{
    for (int i=0; i<DIMENSION; i++)
        printf("%5d", v[i]);
    printf("\n");
}
