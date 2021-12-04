/*************************************
    (1649) Resoluci�n de Problemas y Algoritmos
    Clase 29: Recursividad
    Descripci�n: Obtinen la suma de n n�meros positivos
    consecutivos comprendidos entre [1, n]. Dise�o iterativo
*/

#include<stdio.h>

int sumatorio_i(int n);

int main()
{
    int num;
    printf("Ingrese una cantidad: ");
    scanf("%d", &num);
    printf("La suma de nros consecutivos entre 1 y %d es: %d\n",
            num, sumatorio_i(num));
    return 0;
}

int sumatorio_i(int n)
{   int i, suma;
    for(suma = 0, i = 1; i <= n; i++)
        suma = suma + i;
    return suma;
}
