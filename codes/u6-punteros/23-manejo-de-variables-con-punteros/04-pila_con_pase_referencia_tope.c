#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10     // tamaño máximo de la pila


void push(int p[SIZE], int *tope, int elem);
int pop (int p[SIZE], int *tope);
int pilaLlena(int *tope);
int pilaVacia(int *tope);

int main()
{   srand( (unsigned long int)time(0));
    int pila[SIZE];
    int tope = 0;
    int elemento;

    printf("Cargando pila... ");
    // carga completa de una pila
    while (!pilaLlena(&tope)) {
        elemento = 1+rand()%100;
        printf(" %d ", elemento);
        push(pila, &tope, elemento);  // apilar elemento
    }
    char llena = (pilaLlena(&tope) == 1) ? 'S' : 'N';
    printf("\nPila llena? %c\n", llena);

    // vaciamiento completo de la pila
    printf("\nVaciando pila: ");
    while (!pilaVacia(&tope))
        printf("\n %d", pop(pila, &tope));   // desapilar
    char vacia = (pilaVacia(&tope) == 1) ? 'S' : 'N';
    printf("\nPila vacia? %c\n", vacia);
}

void push(int p[SIZE], int *tope, int elem)
{   p[*tope]=elem; // almacenamiento en la posición indicada por el contenido donde apunta tope
    (*tope)++;  // accedo al contenido (*tope), luego incremento. PRECAUCION: (*tope)++ es distinto que *tope++
}

int pop(int p[SIZE], int *tope)
{   int aux=0;
    // capturo el valor que esta en la cima que será quitado
    aux= p[*tope - 1];   // posición: contenido donde apunta tope *tope menos 1
    p[*tope - 1] = 0;    // se elimina de la pila
    (*tope)--;  // accedo al contenido (*tope), luego decremento. PRECAUCION: (*tope)-- es distinto que *tope--
    return (aux);   // retorno el valor extraido de la pila
}

int pilaLlena(int *tope)
{   int x=(*tope==SIZE)? 1: 0; // si el contenido donde apunta tope es SIZE entonces V sino F
    return (x);
}

int pilaVacia(int *tope)
{
    int x=(*tope==0)? 1: 0;  // Si el contenido donde apunta tope es 0 entonces V sino F
    return (x);
}
