#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int num;
    struct nodo *ant;
    struct nodo *sig;
};

typedef struct nodo TNodoDoble;

TNodoDoble *crearNodo(int e);

int main()
{
    TNodoDoble *nodo = crearNodo(10);

    printf("Direccion del nodo dinamico: %p \n", nodo);
    printf("Contenido del nodo dinamico: %d \n", nodo->num);
}

TNodoDoble *crearNodo(int e)
{
    TNodoDoble *nuevo = (TNodoDoble *)malloc(sizeof(TNodoDoble));

    nuevo->num = e;
    nuevo->ant = NULL;
    nuevo->sig = NULL;

    return nuevo;
}
