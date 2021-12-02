#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 5
#define COLUMNAS 5
void cargarmatriz(int m[FILAS][COLUMNAS]);
void mostrarmatriz(int m[FILAS][COLUMNAS]);

main()
{   int mat[FILAS][COLUMNAS];
    srand(time(0));
    cargarmatriz(mat);
    mostrarmatriz(mat);

}
void cargarmatriz(int m[FILAS][COLUMNAS])
{   int f, c;
    // ciclo externo: recorre todas las filas
    for (f = 0; f < FILAS; f++)
    {   // ciclo interno: recorre todas las columnas de cada fila
        for (c = 0; c < COLUMNAS; c++)
            m[f][c] = 10 + rand()%(41);  // asignación a un elemento
    }
}
void mostrarmatriz(int m[FILAS][COLUMNAS])
{   int f, c;
    for (f=0; f<FILAS; f++){
        for (c=0; c<COLUMNAS; c++)
            printf("%5d", m[f][c]);
        printf("\n");  // nueva linea por cada fila recorrida
    }
}

