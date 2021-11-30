#include <stdio.h>

// Problema: generar 10 numeros consecutivos del 1 al 10  (version do while)

int main()
{
    int i; // variable de control

    i = 1;  // inicialización
    do
    {
       printf("%3d", i);
       i++;  // modificacion

    } while (i<=10);  //condición de variable de control
}
