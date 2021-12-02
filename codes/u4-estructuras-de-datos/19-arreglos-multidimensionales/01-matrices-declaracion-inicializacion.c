#include <stdio.h>
#define DIMENSION 20
#define FILAS 4
#define COLUMNAS 3

int main()
{   // solo declaraciones:
    char s[DIMENSION][DIMENSION];   // Matriz cuadrada de char de tamaño 20x20
    float f[FILAS][COLUMNAS];       // Matriz de float de tamaño 4x3

    // declaración e inicialización
    int m[FILAS][COLUMNAS] = {  {1, 3, 5},      // fila 0
                                {2, 4, 6},      // fila 1
                                {7, 9, 0},      // fila 2
                                {3, 4, 8} };    // fila 3

    /* No permitido:
    Si la matriz s se declara previamente, no se puede inicializar en otra linea con lista de valores.
    Ejemplo: Error de sintaxis

    char s[DIMENSION][DIMENSION];
    s = { {...}, {...}, ... };

    */
    return 0;
}
