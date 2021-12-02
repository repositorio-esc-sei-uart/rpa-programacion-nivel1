#include <stdio.h>
#define LONGITUD 20
#define SIZE 2

typedef struct {
    char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
} Persona;

void cargarPersonas(Persona p[SIZE]);  // p es un parametro de salida. Modificación
void mostrarPersonas(Persona p[SIZE]); // p es un parametro de entrada. Lectura

void main()
{   Persona personas[SIZE];
    // paso por referencia
    cargarPersonas(personas);
    mostrarPersonas(personas);
}

void cargarPersonas(Persona p[SIZE])
{
    for(int i=0; i<SIZE; i++)
    {   printf("Registro #%d: \n", i+1);
        printf("Ingrese legajo: "); scanf("%d", &p[i].legajo);
        printf("Ingrese nombre: "); fflush(stdin); gets(p[i].nombre);
        printf("Ingrese apellido: "); fflush(stdin); gets(p[i].apellido);
        printf("--------------------------\n");
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
