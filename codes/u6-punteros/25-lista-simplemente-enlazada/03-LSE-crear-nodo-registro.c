#include <stdio.h>
#include <stdlib.h>

// nodo de tipo fecha
struct Fecha {
    int dia;
    int mes;
    int anio;
    struct Fecha *sig; // enlace al siguiente
};
typedef struct Fecha TNodo;  // Tipo Nodo

TNodo *crearNodo(int d, int m, int a);

int main()
{
    TNodo *nodo = crearNodo(17, 11, 2019);
    printf("** Creacion de nodo dinamico **\n\n");
    printf("Direccion nodo: %p \n", nodo);
    printf("Contenido nodo: \n");
    printf("\t dia: %d \n\t mes: %d \n\t anio: %d \n\t nodo sig: %p\n",
           nodo->dia, nodo->mes, nodo->anio, nodo->sig);
}

TNodo *crearNodo(int d, int m, int a)
{   // creación del nodo dinamico
    TNodo *nuevo = (TNodo *)malloc(sizeof(TNodo));
    // inicialización de campos del nodo dinámico
    nuevo->dia = d;
    nuevo->mes = m;
    nuevo->anio = a;
    nuevo->sig = NULL; // NULL indica que es un nodo final

    return nuevo;
}

