#include <stdio.h>

int main()
{
    float x;

    void *ptr;

    ptr = &x;
    *(float *)ptr = 5.6;

    printf("Valor de x: %.2f \n", x);
    printf("Valor de x mediante puntero: %.2f \n", *(float *)ptr );
}

