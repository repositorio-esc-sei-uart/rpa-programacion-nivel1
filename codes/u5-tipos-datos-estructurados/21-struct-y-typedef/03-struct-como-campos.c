#include <stdio.h>
#define LONGITUD 20

// definicion de estructura interna
struct Fecha
{   int dia;
    int mes;
    int anio;
};

struct Persona
{   char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
    struct Fecha fecnac;  // otra estructura
};  // definicion de estructura externa

void main()
{   struct Fecha fecnac = {11, 12, 1980};
    struct Persona person1 = {"Ruth", "Logman", 123, fecnac};

    //struct Persona person1 = {"Ruth", "Logman", 123, {25, 06, 1975} };
    printf("Registro cargado: \n");
    printf("Legajo: %d \n", person1.legajo);
    printf("Nombre: %s \n", person1.nombre);
    printf("Apellido: %s \n", person1.apellido);
    printf("Fecha de nacimiento: %d / %d / %d \n", person1.fecnac.dia,
           person1.fecnac.mes, person1.fecnac.anio);
           //printf("Fecha de nacimiento: %? \n", person1.fecnac);  // error
}

