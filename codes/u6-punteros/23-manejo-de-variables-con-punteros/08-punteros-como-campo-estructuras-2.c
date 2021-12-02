#include <stdio.h>

typedef struct fecha {
    int dia;
    int mes;
    int anio;
} TFecha;

typedef struct ejemplo {
    float x;
    TFecha *ptr;
} TEjemplo;

int main()
{   TFecha fecha1;

    TEjemplo ej;
    ej.x = 3.23;
    ej.ptr = &fecha1;

    ej.ptr->dia = 2;  // equivalente a (ej.ptr)->dia = 2
    ej.ptr->mes = 11;
    ej.ptr->anio = 2020;

    printf("Estructura TEjemplo:\n");
    printf("campo x: %.2f \n", ej.x);
    printf("campo ptr: %p \n", ej.ptr);
    printf("fecha1: %d/%d/%d \n", ej.ptr->dia, ej.ptr->mes, ej.ptr->anio);
}
