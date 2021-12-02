#include <stdio.h>
#define LONGITUD 20
#define SIZE 2

struct Persona {
    char nombre[LONGITUD];
    char apellido[LONGITUD];
    int legajo;
};

typedef struct Persona Persona;

void main()
{   int i;
    Persona personas[SIZE];

    for(i=0; i<SIZE; i++)
    {   printf("Registro #%d: \n", i+1);
        printf("Ingrese legajo: "); scanf("%d", &personas[i].legajo);
        printf("Ingrese nombre: "); fflush(stdin); gets(personas[i].nombre);
        printf("Ingrese apellido: "); fflush(stdin); gets(personas[i].apellido);
        printf("--------------------------\n");
    }

    printf("\nRegistros cargados: \n");
    for(i=0; i<SIZE; i++)
    {   printf("%d) Legajo: %d - %s, %s\n", i+1, personas[i].legajo,
               personas[i].apellido, personas[i].nombre);
    }
}

