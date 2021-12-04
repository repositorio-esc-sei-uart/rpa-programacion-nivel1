/********************************************
(1649) Resolución de Problemas y Algoritmos
Clase 29: Recursividad
Descripcion: Calcular el factorial de un número n!

[Versión recursiva]
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
{
    if(n < 2)  // si es el caso base 0!=1 y 1!=1
        return 1;
    else
        return n * factorial(n-1);  // llamada recursiva
}
