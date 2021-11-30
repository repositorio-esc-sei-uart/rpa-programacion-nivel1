#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;
    int e = 32000;

    double result1 = a / b;
    double result2 = (double)a / (double)b;
    char letra = (char) e;

    printf("Division de enteros sin cast: %f \n", result1);
    printf("Division de enteros con cast: %f \n", result2);
    printf("Entero con cast a char: %c \n", letra);
}
