#include <stdio.h>
#define LONGITUD 20
#define SIZE 3

typedef struct {
    char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
} Persona;

void ordenarPorLegajo(Persona p[SIZE]);
void mostrarPersonas(Persona p[SIZE]);

void main()
{
    Persona personas[SIZE] = {  {"Ruth", "Logman", 123} ,
                                {"Paul", "Hall", 541} ,
                                {"Jose", "Guzman", 233} };
    mostrarPersonas(personas);
    ordenarPorLegajo(personas);
    printf("\nRegistros ordenados por legajo: ");
    mostrarPersonas(personas);
}

void ordenarPorLegajo(Persona p[SIZE])
{   // adaptación del método de ordenamiento por selección directa
    int posmenor, i, j;
    Persona aux;

    for (i = 0; i < SIZE-1; i++)  // SIZE-1 pasadas
    {
        posmenor = i;
        for (j=i+1; j<SIZE; j++)  // seleccionar el menor legajo de la pasada
            if (p[j].legajo < p[posmenor].legajo)
                posmenor = j;

        // intercambio de elementos de tipo Persona
        aux = p[i];
        p[i] = p[posmenor];
        p[posmenor] = aux;
    }
}

void mostrarPersonas(Persona p[SIZE])
{   int i;
    printf("\nRegistros cargados: \n");
    for(i=0; i<SIZE; i++)
    {   printf("%d) Legajo: %d - %s, %s\n", i+1, p[i].legajo,
               p[i].apellido, p[i].nombre);
    }
}
