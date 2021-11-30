#include <stdio.h>

// Problema: generar 10 numeros consecutivos del 1 al 10 (version while)

int main()
{
    int i; // variable de control

    i = 1;    // inicializacion
    while (i<=10)   //condicion de variable de control
    {
        printf("%3d", i);
        i++;  // incremento i = i + 1
    }
    printf("La variable de control terminó con %d", i);
}
