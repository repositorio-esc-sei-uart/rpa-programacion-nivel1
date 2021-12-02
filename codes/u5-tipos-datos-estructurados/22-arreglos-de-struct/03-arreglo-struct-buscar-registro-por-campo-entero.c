#include <stdio.h>
#define LONGITUD 20
#define SIZE 3

typedef struct {
    char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
} Persona;

int buscarPorLegajo(Persona p[SIZE], int legajo);

void main()
{   Persona personas[SIZE]={ {"Ruth", "Logman", 123} ,
                             {"Jose", "Guzman", 233} ,
                             {"Paul", "Hall", 541} } ;
    int leg;
    printf("Buscar por Legajo: "); scanf("%d", &leg);
    int pos = buscarPorLegajo(personas, leg);
    if (pos != -1) // si se encontro persona
        printf("\nLegajo: %d - %s, %s\n", personas[pos].legajo, personas[pos].apellido, personas[pos].nombre);
    else
        printf("\nNo se encontraron resultados\n");
}

int buscarPorLegajo(Persona p[SIZE], int legajo)
{   int pos = -1;  // aun no encontrado
    for(int i=0; (i < SIZE) && (pos == -1); i++)
    {   if (p[i].legajo == legajo)
            pos = i;
    }
    return pos;

}
