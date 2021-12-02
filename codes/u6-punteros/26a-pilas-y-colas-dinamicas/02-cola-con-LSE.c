#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct nodo
{   int num;
    struct nodo *sig;
};
typedef struct nodo TNodo;
typedef struct nodo *TLista;  // es equivalente a: typedef TNodo *TLista;

int esVacia(TLista c);
TNodo *crearNodo(int e);
void encolar(TLista *c, int e);
TNodo desencolar(TLista *c);

int main()
{   int x; TNodo aux;

    TLista cola = NULL;  // cola inicial: vacia

    srand((unsigned int)time(0));
    do {
        x = rand()%10;
        printf("encolar(%d)\n", x);
        encolar(&cola, x);
    } while(x>0);

    printf("\n");
    while( !esVacia(cola) )
    {
        aux = desencolar(&cola);
        printf("desencolar->%d\n", aux.num);
    }
}

int esVacia(TLista c)
{
    return c==NULL;
}

TNodo *crearNodo(int e)
{
    TNodo *nuevo = (TNodo *)malloc(sizeof(TNodo));

    nuevo->num = e;
    nuevo->sig = NULL;

    return nuevo;
}

void encolar(TLista *c, int e)
{
    TNodo *nodo = crearNodo(e);

    if( esVacia(*c) )  // si cola no es vacia (*c!=NULL)
        *c = nodo;
    else
    {
        TNodo *aux = *c;
        while(aux->sig != NULL) // mientras aux no llegó al último nodo
        {
            aux = aux->sig;
        }

        aux->sig = nodo;  // insertar nodo al final
    }
}

TNodo desencolar(TLista *c)
{   // PRECONDICION: la cola c no debe ser vacia.

    TNodo *aux = NULL;

    aux = *c;
    *c = aux->sig;

    aux->sig = NULL; // nodo eliminado de la lista

    return *aux;
}
