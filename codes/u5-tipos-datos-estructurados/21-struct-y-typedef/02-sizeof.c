#include <stdio.h>
#define LONGITUD 20

// definición de struct Persona
struct Persona
{   char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
};

// area de declaración de funciones
// y variables globales

main()
{   // definición de dos variables locales a main
    // de tipo struct Persona: person1 y person2 (forma 2)
    struct Persona person1 = {"Ruth", "Logman", 222};
    //...
    printf("tipo struct Persona ocupa %d bytes \n", sizeof(struct Persona));
    printf("variable person1 ocupa %d bytes \n", sizeof(person1));

}

// area de definición de funciones



