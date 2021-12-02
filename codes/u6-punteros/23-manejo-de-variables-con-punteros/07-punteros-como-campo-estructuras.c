#include <stdio.h>

typedef struct ejemplo {
    float x;
    int *ptr;
} TEjemplo;

int main()
{   int num = 10;

    TEjemplo ej;
    ej.x = 3.23;
    ej.ptr = &num;

    printf("Estructura TEjemplo:\n");
    printf("campo x: %.2f \n", ej.x);
    printf("campo ptr: %p \n", ej.ptr);
    printf("num mediante campo ptr: %d \n", *ej.ptr);
}
