#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10     // tamaño máximo de la pila

int pila[SIZE];     // arreglo que usaremos como pila
int tope = 0;       // cima o tope de la pila

void push(int p[SIZE], int elem);
int pop (int p[SIZE]);
int pilaLlena();
int pilaVacia();

int main()
{   srand( (unsigned long int)time(0));
    int elemento;
    printf("Cargando pila... ");
    // carga completa de una pila
    while (!pilaLlena()) { // mientras la pila no esta llena: !1=0 y !0=1
        elemento = 1+rand()%100;
        printf(" %d ", elemento);
        push(pila, elemento);  // apilar nuevo elemento
    }
    char llena = (pilaLlena() == 1) ? 'S' : 'N';  // operador ternario
    printf("\nPila llena? %c\n", llena);

    // vaciamiento completo de la pila
    printf("\nVaciando pila: ");
    while (!pilaVacia())   // mientras la pila no esta vacia: !1=0 y !0=1
        printf("\n %d", pop(pila));   // desapilo y lo muestro por pantalla
    char vacia = (pilaVacia() == 1) ? 'S' : 'N';
    printf("\nPila vacia? %c\n", vacia);  // operador ternario

    return 0;
}

void push(int p[SIZE], int elem)
{   p[tope]=elem; // almaceno el elemento en la cima de la pila
    tope++;  // aumento posición para ubicar el siguiente elemento
}

int pop(int p[SIZE])
{   int aux=0;
    // capturo el valor que esta en la cima (tope - 1) que será quitado
    aux= p[tope-1];
    p[tope-1] = 0;    // se elimina de la pila
    tope--;         // dismuyo el tope para actualizar la nueva cima
    return (aux);   // retorno el valor extraido de la pila
}

int pilaLlena()
{   int x=(tope==SIZE)? 1: 0; // si el tope es SIZE entonces verdadero sino falso
    return (x);  // retorna 1 (verdadero) ó cero (falso)
}

int pilaVacia()
{
    int x=(tope==0)? 1: 0;  // Si el tope es 0 entonces verdadero sino falso
    return (x);  // retorna 1 (verdadero) ó cero (falso)
}
