#include <stdio.h>

int main()
{
    int cont, n;
    int suma;

    printf("Ingrese 10 numeros enteros: \n");

    for (suma = 0,cont = 0; cont < 10; cont++)
    {
        scanf("%d", &n);
        suma = suma + cont;  // suma =+ n

        printf("variable de control: %d\n", cont);

    }

    printf("La suma total es %d", suma);
}
