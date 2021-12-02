#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10        // tamaño máximo de la cola

// estructura de datos
int cola[SIZE]; // arreglo que usaremos como cola
int frente, fin;       // Frente y final de la cola
// operaciones
void crearCola();  // inicia una cola vacia: frente = fondo = 0
void agregarElemento(int c[SIZE], int elem);
int sacarElemento(int c[SIZE]);
int colaLlena();
int colaVacia();

int main()
{   int elemento;
    srand( (unsigned long int)time(0));
    crearCola();  // inicia cola vacia
    printf("Cargando cola... ");
    while (!colaLlena()) { // mientras cola no esta llena: !1=0 y !0=1
        elemento = 1+rand()%100;
        printf(" %d ", elemento);
        agregarElemento(cola, elemento);  // apilar nuevo elemento
    }
    char llena = (colaLlena() == 1) ? 'S' : 'N';  // operador ternario
    printf("\nCola llena? %c\n", llena);

    printf("\nVaciando cola: \n");
    while (!colaVacia())  // mientras cola no está vacia: !1=0 y !0=1
        printf(" %d \n", sacarElemento(cola));
    char vacia = (colaVacia() == 1) ? 'S' : 'N';
    printf("\nCola vacia? %c\n", vacia);  // operador ternario
}

void crearCola()
{   // inicia una cola vacia preparada para almacenar elementos
    frente = fin = 0;
}

void agregarElemento(int c[SIZE], int elem)
{   c[fin] = elem;  // almaceno el elemento al final de la cola
    fin++;          // desplazo el final para ubicar el siguiente elemento
}

int sacarElemento(int c[SIZE])
{   int aux;
    // capturo el valor que esta en el frente que será quitado de la cola
    aux = c[frente];
    c[frente] = 0;   // se elimina de la cola
    frente++;        // desplazo el frente en dirección al final
    return (aux);
}

int colaLlena()
{   int x = (fin==SIZE)? 1:0; // si el final es SIZE entonces verdadero sino falso
    return x;  // retorna 1 (verdadero) ó cero (falso)
}

int colaVacia()
{   int x= (frente==fin)? 1:0; // si el frente es igual al final entonces verdadero sino falso
    return x;  // retorna 1 (verdadero) ó cero (falso)
}


