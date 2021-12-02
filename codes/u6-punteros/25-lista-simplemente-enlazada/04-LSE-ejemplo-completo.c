#include <stdio.h>
#include <stdlib.h>

// nodo con clave numerica como información
struct nodo {
    int num;
    struct nodo *sig; // enlace al siguiente nodo
};
typedef struct nodo TNodo;  // Tipo Nodo
typedef TNodo *TLista;  // Tipo Lista, es un puntero a struct nodo

TNodo *crearNodo(int elem);
void insertarAlInicio(TLista *l, int e);
void insertarAlFinal(TLista *l, int e);
void insertarOrdenado(TLista *l, int e);
void mostrarLista(TLista l);
void buscarNodo(TLista l, int e);
TNodo *eliminar(TLista *l, int e);
void ordenarLista(TLista *l);
void ordenarPorSeleccion(TLista *l);

int main()
{   int x;
    TLista lista = NULL; //lista vacia

    insertarOrdenado(&lista, 10);
    mostrarLista(lista);
    insertarOrdenado(&lista, 5);
    mostrarLista(lista);
    insertarOrdenado(&lista, 8);
    mostrarLista(lista);
    insertarAlInicio(&lista, 20);
    mostrarLista(lista);
    insertarAlFinal(&lista, 15);
    mostrarLista(lista);
    /*printf("Buscar: "); scanf("%d", &x);
    buscarNodo(lista, x);
    printf("Eliminar: "); scanf("%d", &x);
    eliminar(&lista, x);
    mostrarLista(lista);*/
    //ordenarLista(&lista);
    //mostrarLista(lista);
    ordenarPorSeleccion(&lista);
    mostrarLista(lista);
}

void insertarAlInicio(TLista *l, int e)
{   // IMPORTANTE: La función trabaja con la lista original recibida por referencia
    TNodo *nodo = crearNodo(e);

    if (*l != NULL) // si la lista no es vacia (CASO B)
        nodo->sig = *l;  // campo sig del nuevo nodo apunta al 1er nodo de la lista l

    *l = nodo; // insercion del nuevo nodo al inicio
}

void insertarAlFinal(TLista *l, int e)
{   TNodo *aux;  // puntero auxiliar para recorrido de lista
    TNodo *nodo = crearNodo(e);  // nuevo nodo

    if(*l == NULL)  // si lista es vacia
        *l = nodo;  // inserción del primer nodo de la lista
    else
    {
        aux = *l;                   // inicilización del puntero auxiliar
        while(aux->sig != NULL)     // recorrido hasta llegar al ultimo nodo
            aux = aux->sig;

        aux->sig = nodo; // insercion del nuevo nodo al final
    }
}

void insertarOrdenado(TLista *l, int e)
{   TNodo *aux, *ant;
    TNodo *nodo = crearNodo(e);

    if(*l == NULL)  // Caso A
        *l = nodo;
    else
    {               // Caso B
        ant = NULL;
        aux = *l;
        while ((aux!=NULL) && (aux->num < e)) {
            ant = aux;
            aux = aux->sig;
        }
        if(ant == NULL) // Subcaso B.1: al principio
        {
            nodo->sig = *l;
            *l = nodo;
        }
        else        // Subcaso B.2: en cualquier otro lugar
        {
            nodo->sig = aux;
            ant->sig = nodo;
        }
    }
}

TNodo *crearNodo(int elem)
{   // creación del nodo dinamico
    TNodo *nuevo = (TNodo *)malloc(sizeof(TNodo));
    // inicialización de campos del nodo dinámico
    nuevo->num = elem;
    nuevo->sig = NULL; // NULL indica que es un nodo final

    return nuevo;
}

void mostrarLista(TLista l)
{
    TNodo *aux = l;  // inicializar auxiliar con el comienzo de lista

    while(aux != NULL)  // mientras no sea fin de lista
    {
        printf(" %d ", aux->num);
        aux = aux->sig;  // desplazar auxiliar
    }
    printf("\n");
}

void buscarNodo(TLista l, int e)
{
    if (l == NULL)
        printf("Lista vacía\n");
    else
    {
        TNodo *aux = l;
        // Mientras no es fin de lista y no se encontró elemento
        while( (aux != NULL) && (aux->num != e) )
            aux = aux->sig;  // desplazar puntero al siguiente nodo

        if (aux != NULL) // Si no es fin de lista
            printf("Elemento %d encontrado\n", e);
        else
            printf("Elemento no encontrado\n");
    }
}

TNodo *eliminar(TLista *l, int e)
{   TNodo *aux, *ant, *p;

    // recorrer lista hasta encontrar elemento
    ant = NULL;  // puntero anterior
    aux = *l;    // puntero actual
    // mientras no sea fin de lista AND elemento no encontrado
    while( (aux != NULL) && (aux->num != e) )
    {   // desplazamiento de anterio y actual
        ant = aux;
        aux = aux->sig;
    }

    if (aux != NULL)  // si no es fin de lista, eliminar el nodo encontrado
    {
        if(ant == NULL) // si el elemento a eliminar esta al inicio
            *l = aux->sig;  // eliminar primer nodo
        else
            ant->sig = aux->sig;  // eliminar nodo intermedio o final

        p = aux;  // capturar nodo eliminado para retornar
        p->sig = NULL;
        return p;
    }
    else
        return NULL;  // nodo no existe
}

void ordenarLista(TLista *l)
{
    TNodo *p;
    TLista lordenada = NULL;  // lista auxiliar

    while ( *l != NULL ) // mientras la lista original no sea vacía
    {
        p = eliminar(l, (*l)->num); // elimina primer nodo de lista original
        insertarOrdenado(&lordenada, p->num); // inserta nodo en la lista auxiliar
    }

    *l = lordenada; // copiar lista ordenada a la lista original
}

void ordenarPorSeleccion(TLista *l)
{
    TNodo *aux1, *aux2, *menor;
    int temp;

    for(aux1 = *l; aux1 != NULL; aux1 = aux1->sig)
    {
        menor = aux1;
        for(aux2 = aux1; aux2!=NULL; aux2 = aux2->sig)
        {
            if(aux2->num < menor->num)
                menor = aux2;
        }

        temp = menor->num;
        menor->num = aux1->num;
        aux1->num = temp;
    }
}
