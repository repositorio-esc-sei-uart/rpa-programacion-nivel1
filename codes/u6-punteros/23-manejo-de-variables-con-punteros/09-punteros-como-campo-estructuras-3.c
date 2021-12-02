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
    TEjemplo *pej;

    pej = &ej;
    pej->x = 3.23;
    pej->ptr = &fecha1;

    pej->ptr->dia = 29;  // equivalente a (ej.ptr)->dia = 29
    pej->ptr->mes = 8;
    pej->ptr->anio = 2019;

    printf("Estructura TEjemplo:\n");
    printf("campo x mediate pej: %.2f \n", pej->x);
    printf("campo ptr mediante pej: %p \n", pej->ptr);
    printf("fecha1: %d/%d/%d \n", pej->ptr->dia, pej->ptr->mes, pej->ptr->anio);
}
