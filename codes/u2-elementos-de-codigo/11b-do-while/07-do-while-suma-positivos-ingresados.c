#include <stdio.h>

// Problema: obtener desde teclado solo números positivos y sumarlos (version do while)

int main()
{
    int n = 0;  // inicializacion de la vble control
    int suma = 0;

    //scanf("%d", &n);
    do
    {
        suma = suma + n;
        printf("Ingrese un número positivo: ");
        scanf("%d", &n);   // alteracion de la variable de control

    } while (n > 0);  // condicion de parada

    printf("El ciclo termino con el valor: %d\n", n);
    printf("Suma positivos: %d", suma);
}
