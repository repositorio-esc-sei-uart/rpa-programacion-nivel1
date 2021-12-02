#include <stdio.h>
#define FILAS 2
#define COLUMNAS 3

main()
{   int f, c;
    int m[FILAS][COLUMNAS];

    // operacion de asignación de valores
    // a elementos de la primera fila
    m[0][0] = 1;
    m[0][1] = 2;
    m[0][2] = 3;

    // operación de lectura de valores
    // almacenadas en la seguna fila
    printf("ingrese 3 valores para 2da fila de matriz: ");
    scanf("%d %d %d", &m[1][0], &m[1][1], &m[1][2]);

    printf("seleccionar una posición de la matriz %dx%d\n",
           FILAS, COLUMNAS);
    printf("fila [0 - %d]: ", FILAS-1); scanf("%d", &f);
    printf("columna [0 - %d]: ", COLUMNAS-1); scanf("%d", &c);

    if(f>=0 && f<FILAS && c>=0 && c<COLUMNAS)
        printf("elemento m[%d, %d]: %d\n", f, c, m[f][c]);
    else
        printf("posicion invalida");
}


