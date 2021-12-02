#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int num;
    struct nodo *ant;
    struct nodo *sig;
};
typedef struct nodo TNodoDoble;
typedef struct nodo *TListaDoble;

TNodoDoble *crearNodo(int e);
void insertarAlInicio(TListaDoble *l, int e);
void insertarAlFinal(TListaDoble *l, int e);
void insertarOrdenado(TListaDoble *l, int e);
TNodoDoble *eliminar(TListaDoble *l, int e);
void mostrar(TListaDoble l);
void mostrarInverso(TListaDoble l);

int main()
{   int x;
    TListaDoble lde = NULL;
    insertarAlInicio(&lde, 10);
    mostrar(lde);
    insertarAlFinal(&lde, 22);
    mostrar(lde);
    insertarOrdenado(&lde, 15);
    mostrar(lde);
    insertarOrdenado(&lde, 5);
    mostrar(lde);
    insertarOrdenado(&lde, 40);
    mostrar(lde);
    mostrarInverso(lde);
    printf("\nEliminar: "); scanf("%d", &x);
    TNodoDoble *eliminado = eliminar(&lde, x);
    printf("Nodo eliminado: %d\n", eliminado->num);
    mostrar(lde);
    mostrarInverso(lde);
}

TNodoDoble *crearNodo(int e)
{
    TNodoDoble *nuevo = (TNodoDoble *)malloc(sizeof(TNodoDoble));

    nuevo->num = e;
    nuevo->ant = NULL;
    nuevo->sig = NULL;

    return nuevo;
}

void insertarAlInicio(TListaDoble *l, int e)
{
    TNodoDoble *nodo = crearNodo(e);

    if(*l != NULL)
    {
        nodo->sig = *l;
        (*l)->ant = nodo;
    }

    *l = nodo;
}

void insertarAlFinal(TListaDoble *l, int e)
{
    TNodoDoble *nodo, *aux;

    nodo = crearNodo(e);

    if(*l == NULL)  // CASO A: Lista vacia
        *l = nodo;      // insertar nodo unico
    else            // CASO B: Lista no vacia
    {
        // iniciar recorrido hasta el ultimo nodo:
        aux = *l;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        // insertar nodo al final:
        aux->sig = nodo;
        nodo->ant = aux;
    }
}

void insertarOrdenado(TListaDoble *l, int e)
{
    TNodoDoble *nodo, *aux, *ant;

    nodo = crearNodo(e);

    if(*l == NULL)
        *l = nodo;
    else
    {   // Iniciar recorrido para encontrar lugar ordenado
        aux = *l;
        ant = NULL;
        while( (aux != NULL) && (aux->num < e) )
        {   ant = aux;
            aux = aux->sig;
        }

        if(ant == NULL) {  // SUBCASO B.1: insertar al inicio
            (*l)->ant = nodo;
            nodo->sig = *l;
            *l = nodo;
        } else {            // SUBCASO B.2: insertar en intermedio o al final
            nodo->sig = aux;
            ant->sig = nodo;
            nodo->ant = ant;
            if(aux!=NULL) aux->ant = nodo;  // enlace al anterior en caso de ser intermedio
        }
    }
}

void mostrar(TListaDoble l)
{
    TNodoDoble *aux = l;

    while( aux!=NULL )
    {
        printf(" %d ", aux->num);
        aux = aux->sig;
    }
    printf("\n");
}

void mostrarInverso(TListaDoble l)
{
    TNodoDoble *aux = l;

    // Recorrido hasta llegar al último nodo
    while( aux->sig != NULL )
        aux = aux->sig;

    // Recorrido inverso: imprime lista de der a izq a partir del ultimo nodo
    while(aux!=NULL)
    {
        printf(" %d ", aux->num);
        aux = aux->ant;
    }
}


TNodoDoble *eliminar(TListaDoble *l, int e)
{
    TNodoDoble *aux, *ant, *p;

    ant = NULL;
    aux = *l;
    while( (aux != NULL) && (aux->num!=e) )
    {   ant = aux;
        aux = aux->sig;
    }

    p = NULL;
    if(aux != NULL)
    {
        if(ant == NULL)
        {   *l = aux->sig;
            (*l)->ant = NULL;
        }
        else
        {   ant->sig = aux->sig;
            if(aux->sig!=NULL)  aux->sig->ant = ant;
        }

        p = aux;
        p->sig = NULL;
        p->ant = NULL;
    }

    return p;
}
