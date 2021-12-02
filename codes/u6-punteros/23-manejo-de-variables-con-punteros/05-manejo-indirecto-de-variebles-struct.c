#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anio;
} TFecha;

int main() {

    TFecha fecha1;
    TFecha *pfecha;

    pfecha = &fecha1;

    printf("Direccion almacenada en pfecha: %p\n", pfecha);
    printf("Direccion del campo dia: %p\n", &(pfecha->dia) );
    printf("Direccion del campo mes: %p\n", &(pfecha->mes) );
    printf("Direccion del campo anio: %p\n", &(pfecha->anio) );
}


