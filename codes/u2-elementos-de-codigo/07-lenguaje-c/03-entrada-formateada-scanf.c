#include <stdio.h>

int main()
{
    char letra;
    int n;
    float dec1;

    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    printf("Ingrese un número decimal: ");
    scanf("%f", &dec1);

    printf("Los valores ingresados son: %8d | %.3f | %c", n, dec1, letra);
}

