#include <stdio.h>

int main()
{
    int cont, n;
    int suma;

    printf("Ingrese 10 numeros enteros: \n");

    suma = 0; // inicializar sumador
    for (cont = 0; cont < 10; cont++)  // variable de control: cont
    {
        scanf("%d", &n);
        suma =+ n; // equivale a: suma = suma + n
    }
    printf("La suma total es %d", suma);
}
