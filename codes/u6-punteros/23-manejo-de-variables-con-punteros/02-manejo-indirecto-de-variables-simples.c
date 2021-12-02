#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    float y;
    char letra;

    int *pint;
    float *pfloat;
    char *pcaracter;

    // apuntar a variables (asignación de direcciones)
    pint = &x;
    pfloat = &y;
    pcaracter = &letra;

    // asignar de valores a través de los punteros
    *pint = 10;
    *pfloat = 3.4;
    *pcaracter = 'L';

    // verificar de contenidos de variables apuntadas
    printf("\n x=%d \t y=%f \t letra=%c \n", x, y, letra);
}
