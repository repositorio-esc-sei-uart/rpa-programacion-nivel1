#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct nodo
{   int num;
    struct nodo *sig;
};
typedef struct nodo TNodo;
typedef struct nodo *TLista;  // es equivalente a: typedef TNodo *TLista;

int esVacia(TLista p);
TNodo *crearNodo(int e);
void push(TLista *p, int e);
TNodo pop(TLista *p);

int main()
{   int x;
    TNodo aux;
    TLista pila = NULL;

    srand(time(0));
    do {
        x = rand()%10;
        printf("push(%d)\n", x);
        push(&pila, x);
    } while(x!=0);

    printf("\n");
    while( !esVacia(pila) )
    {   aux = pop(&pila);
        printf("pop()->%d\n", aux.num);
    }
}

int esVacia(TLista p)
{
    return p==NULL;
}

TNodo *crearNodo(int e)
{
    TNodo *nuevo = (TNodo *)malloc(sizeof(TNodo));

    nuevo->num = e;
    nuevo->sig = NULL;

    return nuevo;
}

void push(TLista *p, int e)
{
    TNodo *nodo = crearNodo(e);

    if( !esVacia(*p) )  // si pila no es vacia (*p!=NULL)
        nodo->sig = *p;  // enlazar el nuevo con el primer nodo

    *p = nodo;  // insertar nodo al comienzo
}

TNodo pop(TLista *p)
{   // PRECONDICION: la pila p no debe ser vacia.

    TNodo *aux = NULL;

    aux = *p;
    *p = aux->sig;

    aux->sig = NULL; // nodo eliminado de la lista

    return *aux;
}
