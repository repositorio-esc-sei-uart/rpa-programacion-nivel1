#include <stdio.h>
// Ingrese 10 numeros y sumarlos

int main()
{
    int n;
    int suma = 0;
    int cont = 0;  // variable de control cont - 1º inicializacion

    printf("Ingrese 10 números enteros\n");

    do {
        scanf("%d", &n);
        suma = suma + n;
        cont++;  // 3º modificacion o alteración
    } while( cont < 10 );  // 2º condicion de parada

    printf("La suma total es: %d", suma);
}
