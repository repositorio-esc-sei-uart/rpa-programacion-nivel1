/********************************************
(1649) Resolución de Problemas y Algoritmos
Clase 29: Recursividad
Descripcion: Calcular el factorial de un número n!

[Versión iterativa]
*********************************************/

#include<stdio.h>

long factorial(int n);

int main() {
    int num;

    printf("Ingrese un numero natural: ");
    scanf("%d", &num);
    printf("El factorial de %d es: %ld\n", num, factorial(num) );

    return 0;
}

long factorial(int n)
{   int i;
    long fac;

    if(n < 2)
        return 1;
    else {
        for(fac = 1, i = 1; i <= n; i++)
            fac = fac * i;
        return fac;
    }
}
