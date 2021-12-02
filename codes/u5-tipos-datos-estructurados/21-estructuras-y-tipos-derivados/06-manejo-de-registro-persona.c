#include <stdio.h>
#include <ctype.h>
#define LONGITUD 20

typedef struct
{   char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
} Persona;

void mayusculas(char cad[LONGITUD]);
Persona leerRegistro();
void mostrarRegistro(Persona p);

void main()
{   Persona person1;

    person1 = leerRegistro();

    mayusculas(person1.apellido);
    mayusculas(person1.nombre);

    mostrarRegistro(person1);
}

void mayusculas(char cad[LONGITUD])
{
    for (int i=0; i<LONGITUD; i++)
        cad[i] = toupper(cad[i]);
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
