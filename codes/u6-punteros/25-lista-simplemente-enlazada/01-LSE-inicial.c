#include <stdio.h>
#include <stdlib.h>

// nodo con clave numerica como informaci�n
struct nodo {
    int num;
    struct nodo *sig; // enlace al siguiente nodo
};

typedef struct nodo TNodo;  // Tipo Nodo

// este tipo nos ayudar� a evitar el uso de punteros dobles
typedef TNodo *TLista;  // Tipo Lista, es un puntero a struct nodo

int main()
{
    TLista lista = NULL;  // puntero que crea lista inicial vacia

    //...
}

