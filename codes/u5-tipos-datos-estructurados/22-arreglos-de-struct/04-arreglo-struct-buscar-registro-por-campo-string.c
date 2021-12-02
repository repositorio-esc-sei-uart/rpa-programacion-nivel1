#include <stdio.h>
#include <string.h>
#define LONGITUD 20
#define SIZE 3

typedef struct {
    char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
} Persona;

int buscarPorApellido(Persona p[SIZE], char apellido[LONGITUD]);

void main()
{   Persona personas[SIZE]={ {"Ruth", "Logman", 123} ,
                             {"Jose", "Guzman", 233} ,
                             {"Paul", "Hall", 541} } ;
    char ape[LONGITUD];
    printf("Buscar por Apellido: "); gets(ape);
    int pos = buscarPorApellido(personas, ape);
    if (pos != -1) // si se encontro persona
        printf("\nLegajo: %d - %s, %s\n", personas[pos].legajo, personas[pos].apellido, personas[pos].nombre);
    else
        printf("\nNo se encontraron resultados\n");
}

int buscarPorApellido(Persona p[SIZE], char apellido[LONGITUD])
{   int pos = -1;  // aun no encontrado
    for(int i=0; (i < SIZE) && (pos == -1); i++)
    {   if (strcmp(p[i].apellido, apellido) == 0) //este ejemplo busca por apellido exacto
            pos = i;
    }
    return pos;

}
