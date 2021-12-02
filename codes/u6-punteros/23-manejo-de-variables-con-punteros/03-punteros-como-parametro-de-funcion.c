#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrar(int num);
void cargarPorTeclado(int *pnum);
void cargarAleatorio(int *pnum);

int main()
{   int x, y;
    srand(time(0));

    cargarPorTeclado(&x);
    cargarAleatorio(&y);
    printf("\nValor ingresado por teclado: ");
    mostrar(x);
    printf("\nValor aleatorio generado: ");
    mostrar(y);
}

void mostrar(int num) // num recibe un valor
{   printf("%d\n", num);  }

void cargarPorTeclado(int *pnum) // pnum recibe una direcci�n de alguna variable
{   printf("Ingresar un numero: ");
    scanf("%d", pnum);  // pasamos a scanf la direcci�n almacenada en pnum
}

void cargarAleatorio(int *pnum) // se espera una direcci�n de alguna variable
{   *pnum = rand()%40;  }

