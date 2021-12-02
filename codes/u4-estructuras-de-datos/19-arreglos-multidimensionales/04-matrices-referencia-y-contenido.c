#include <stdio.h>
#define FILAS 2
#define COLUMNAS 2

main()
{   int f, c;
    int m[FILAS][COLUMNAS] = {{20, 40}, {30, 50}};

    printf("Referencia de comienzo de matriz es %p\n", m);
    printf("Referencia de comienzo de fila 0 es %p\n", m[0]);
    printf("Referencia de comienzo de fila 1 es %p\n", m[1]);
    printf("Referencia de un elemento en la posición [0,1] %p\n", &m[0][1]);

    printf("\nEl contenido de la matriz es:\n");
    for (f=0; f<FILAS; f++){
        for (c=0; c<COLUMNAS; c++)
            printf("%5d", m[f][c]);
        printf("\n");
    }
}
