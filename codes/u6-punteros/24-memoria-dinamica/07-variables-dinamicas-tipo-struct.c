#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona
{
    int legajo;
    char apellido[30];
};
typedef struct persona TPersona;

int main()
{   TPersona *ptr;

    // asignacion de 1 bloque dinamico de memoria de tipo TPersona
    ptr = (TPersona *) malloc(sizeof(TPersona));

    printf("Direccion del comienzo de asignacion dinamica\n");
    printf("ptr: %p  tamano: %d bytes \n", ptr, sizeof(*ptr));

    ptr->legajo = 210;
    strcpy(ptr->apellido, "Martinez");

    printf("\nContenido de direcciones dinamicas\n");
    printf("acceso a legajo desde ptr: %d\n", ptr->legajo);
    printf("acceso a apellido desde ptr: %s\n", ptr->apellido);
}
