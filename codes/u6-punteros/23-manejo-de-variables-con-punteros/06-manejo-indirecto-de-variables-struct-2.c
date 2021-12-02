#include <stdio.h>

struct Fecha{
    int dia;
    int mes;
    int anio;
};
typedef struct Fecha TFecha;

int main() {

    TFecha fecha1;
    TFecha *pfecha;

    pfecha = &fecha1; // importante: inicializar puntero

    pfecha->dia = 14;
    pfecha->mes = 10;
    pfecha->anio = 2021;

    printf("Dia: %d\n", fecha1.dia);
    printf("Mes: %d\n", fecha1.mes);
    printf("Año: %d\n", fecha1.anio);
}


