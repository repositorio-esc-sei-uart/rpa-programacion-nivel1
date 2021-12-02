#include <stdio.h>
#include <string.h>
#define LONGITUD 20

struct Persona
{   char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
};  // definición del tipo struct

int main()
{   // declaración de variables de tipo struct local a main
    struct Persona person1, person2;

    // acceso para carga de miembros de variable person1
    printf("Ingrese legajo: ");
    scanf("%d", &person1.legajo);
    printf("Ingrese nombre: "); fflush(stdin);
    gets(person1.nombre);
    printf("Ingrese apellido: "); fflush(stdin);
    gets(person1.apellido);

    printf("Referencia o direccion de memoria de variable person1: %p\n", person1);
    // acceso para lectura de miembros de person1
    printf("\nDatos cargados de person1: legajo %d - %s %s\n", person1.legajo,
           person1.nombre, person1.apellido);

    person2 = person1;  // copia de miembros mediante asignación directa de estructuras
    // acceso para lectura de miembros de person2
    printf("Datos cargados de person2: legajo %d - %s %s\n", person2.legajo,
           person2.nombre, person2.apellido);
    return 0;
}

