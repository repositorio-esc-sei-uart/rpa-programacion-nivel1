#include <stdio.h>
#include <stdlib.h>

// nodo con clave numerica como informaci�n
struct nodo {
    int num;
    struct nodo *sig; // enlace al siguiente
};
typedef struct nodo TNodo;  // Tipo Nodo
typedef TNodo *TLista;  // Tipo Lista, puntero a struct nodo

TNodo *crearNodo(int elem);

int main()
{
    TLista lista = NULL;  // puntero que crea lista inicial vacia

    TNodo *nodo = crearNodo(20); // nodo listo para insertar en lista

    printf("Direccion del nodo dinamico: %p \n", nodo);
    printf("Contenido del nodo dinamico: %d \n", nodo->num);
}

TNodo *crearNodo(int elem)
{   // creaci�n del nodo dinamico
    TNodo *nuevo = (TNodo *)malloc(sizeof(TNodo));
    // inicializaci�n de campos del nodo din�mico
    nuevo->num = elem;
    nuevo->sig = NULL; // NULL indica que es un nodo final

    return nuevo;
}

