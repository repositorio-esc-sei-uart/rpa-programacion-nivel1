#include <stdio.h>
#include <stdlib.h>

struct Fecha {
    int dia;
    int mes;
    int anio;
    struct nodo *ant;
    struct nodo *sig;
};
typedef struct Fecha TNodoDoble;
TNodoDoble *crearNodo(int d, int m, int a);

int main()
{
    TNodoDoble *nodo = crearNodo(10, 10, 2019);

    printf("Direccion del nodo dinamico: %p \n", nodo);
    printf("Contenido del nodo dinamico: \n");
    printf("\t dia: %d \n\t mes: %d \n\t anio: %d \n\t nodo ant: %p \n\t nodo sig: %p\n",
           nodo->dia, nodo->mes, nodo->anio, nodo->ant, nodo->sig);
}

TNodoDoble *crearNodo(int d, int m, int a)
{   TNodoDoble *nuevo = (TNodoDoble *)malloc(sizeof(TNodoDoble));

    nuevo->dia = d;
    nuevo->mes = m;
    nuevo->anio = a;

    nuevo->ant = NULL;
    nuevo->sig = NULL;

    return nuevo;
}
