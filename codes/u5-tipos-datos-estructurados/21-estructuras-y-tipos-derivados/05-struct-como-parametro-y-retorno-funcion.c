#include <stdio.h>
#define LONGITUD 20

typedef struct
{   char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
} Persona;

Persona leerRegistro();
void mostrarRegistro(Persona p);

void main()
{   Persona person1;

    person1 = leerRegistro();
    mostrarRegistro(person1);
}

Persona leerRegistro()
{   Persona p;

    printf("Ingrese legajo: "); scanf("%d", &p.legajo);
    printf("Ingrese nombre: "); fflush(stdin); gets(p.nombre);
    printf("Ingrese apellido: "); fflush(stdin); gets(p.apellido);

    return p;
}

void mostrarRegistro(Persona p)
{
    printf("\nRegistro cargado: \n");
    printf("Legajo: %d\n", p.legajo);
    printf("Nombre: %s\n", p.nombre);
    printf("Apellido: %s\n", p.apellido);
}




