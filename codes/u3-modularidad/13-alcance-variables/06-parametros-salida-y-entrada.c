#include <stdio.h>
#include <string.h>
#define LONGITUD 10

void dia_de_semana(int opcion, char diaout[LONGITUD]);

int main()
{
    char cadena[LONGITUD];  // recepcion de resultados de salida
    int opcion;  // dato de entrada
    printf("Seleccione num de dia (1-lunes al 7-domingo): ");
    scanf("%d", &opcion);

    printf("Cadena inicial: %s\n", cadena);
    dia_de_semana(opcion, cadena); // llamada a funcion de tipo void con parametro de salida (cadena vacia)
    printf("DIA SELECCIONADO: %s\n", cadena);
}

void dia_de_semana(int opcion, char diaout[LONGITUD])
{   // parametro formal opcion: entrada
    // parametro formal diaout: salida (cadena de caracters)

    switch(opcion) {
    case 1: strcpy(diaout, "Lunes"); break;
    case 2: strcpy(diaout, "Martes"); break;
    case 3: strcpy(diaout, "Miercoles"); break;
    case 4: strcpy(diaout, "Jueves"); break;
    case 5: strcpy(diaout, "Viernes"); break;
    case 6: strcpy(diaout, "Sabado"); break;
    case 7: strcpy(diaout, "Domingo"); break;
    default: strcpy(diaout, "Invalido");
    }
}

