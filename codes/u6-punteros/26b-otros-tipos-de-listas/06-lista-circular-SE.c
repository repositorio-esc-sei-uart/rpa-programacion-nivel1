#include <stdio.h>
#include <stdlib.h>

// nodo con clave numerica como información
struct nodo {
    int num;
    struct nodo *sig;
};
typedef struct nodo TNodo;
typedef TNodo *TLista;

TNodo *crearNodo(int elem);
void insertarOrdenado(TLista *lc, int e);
void mostrar(TLista lc);

int main()
{
    TLista lcse = NULL;
    insertarOrdenado(&lcse, 10);
    mostrar(lcse);
    insertarOrdenado(&lcse, 4);
    mostrar(lcse);
    insertarOrdenado(&lcse, 8);
    mostrar(lcse);
    insertarOrdenado(&lcse, 22);
    mostrar(lcse);
}

TNodo *crearNodo(int elem)
{   // creación del nodo dinamico
    TNodo *nuevo = (TNodo *)malloc(sizeof(TNodo));
    // inicialización de campos del nodo dinámico
    nuevo->num = elem;
    nuevo->sig = NULL; // NULL indica que es un nodo final

    return nuevo;
}

void insertarOrdenado(TLista *lc, int e)
{   TNodo *aux, *ant;
    TNodo *nodo = crearNodo(e);

    if(*lc == NULL){  // Caso A
        nodo->sig = nodo;
        *lc = nodo; // enlace a sí mismo
    }
    else               // Caso B
    {   ant = NULL;
        aux = *lc;
        while ((aux->sig != *lc) && (aux->num < e)) {
            ant = aux;
            aux = aux->sig;
        }

        if(ant == NULL) {   // Subcaso B.1: inserción al principio
            while (aux->sig != *lc)
                aux = aux->sig;
            nodo->sig = *lc;
            *lc = nodo;
            aux->sig = *lc;  // enlace del último al nodo insertado al inicio
        }
        else {       // Subcaso B.2: inserción en cualquier otro lugar
            if(aux->num > e) {
                ant->sig = nodo;
                nodo->sig = aux;
            } else {
                aux->sig = nodo;
                nodo->sig = *lc;
            }
        }
    }
}

void mostrar(TLista lc)
{
    TNodo *aux = lc;

    if(aux != NULL)
    {
        do {
            printf("%d ", aux->num);
            aux = aux->sig;
        } while(aux != lc);

        printf("\n");

    } else
        printf("Lista circular vacia\n");
}
