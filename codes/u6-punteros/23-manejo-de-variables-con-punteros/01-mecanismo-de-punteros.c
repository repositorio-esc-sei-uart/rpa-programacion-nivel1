

#include <stdio.h>

int main()
{
    int num = 10;

    int *pnum; // declaracion de un puntero a int

    // inicializacion:
    pnum = &num; // se almacena en pnum la direcci�n de memoria de num

    // Mostrar informaci�n de num a trav�s del puntero pnum:
    printf("La direccion de memoria de pnum es %p \n", &pnum);
    printf("La direccion de memoria de num es %p \n", pnum);
    printf("El valor almacenado en num es %d \n", *pnum);

    return 0;
}
