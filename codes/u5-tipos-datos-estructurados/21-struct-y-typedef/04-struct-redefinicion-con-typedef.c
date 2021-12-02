#include <stdio.h>
#define LONGITUD 20

// definición de struct Persona
struct TPersona
{   char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
};

// definimos con typedef un nombre corto: Persona
// para no utilizar en el programa struct Persona
typedef struct TPersona Persona;

void main()
{   // declaración de una variable estructura mediante
    // el nombre corto definido con typedef
    Persona person1 = {"Ruth", "Logman", 123};

    printf("Legajo: %d\n", person1.legajo);
    printf("Nombre: %s\n", person1.nombre);
    printf("Apellido: %s\n", person1.apellido);
}




