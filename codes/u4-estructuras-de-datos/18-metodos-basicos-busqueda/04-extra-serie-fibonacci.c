#include <stdio.h>
#define MAXV 10

void cargarNumerosfibo(int f[MAXV]);
void mostrar(int f[MAXV]);

void main()
{
    int fibo[MAXV];
    cargarNumerosfibo(fibo);
    printf("Los primeros 10 numeros fibonacci: \n");
    mostrar(fibo);
}

void cargarNumerosfibo(int f[MAXV])
{
    int i;
    f[0] = 0;  // valores de comienzo de la
    f[1] = 1;  // serie fibonacci

    // resto de los elementos de la serie
    for (i=2; i<MAXV; i++)
        f[i] = f[i-1] + f[i-2]; // suma de 2 terminos anteriores
}

void mostrar(int f[MAXV])
{
    for (int i=0; i<MAXV; i++)
        printf(" %d ", f[i]);
    printf("\n");
}
