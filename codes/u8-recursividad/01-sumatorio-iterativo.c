/*************************************
    (1649) Resolución de Problemas y Algoritmos
    Clase 29: Recursividad
    Descripción: Obtinen la suma de n números positivos
    consecutivos comprendidos entre [1, n]. Diseño recursivo
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
{
    if (n == 1)  // si es el caso base
        return n;
    else       // se acumula n a las sucesivas sumas por cada invocación
        return sumatorio_i(n-1) + n; // llamada recursiva
}
