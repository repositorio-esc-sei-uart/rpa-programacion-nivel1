#include <stdio.h>

int main()
{
    int x;
    int *ptrsimple;
    int **ptrdoble;

    ptrsimple = &x;
    ptrdoble = &ptrsimple;

    printf("Direccion de x desde ptrsimple: %p\n", ptrsimple);
    printf("Direccion de ptrsimple desde ptrdoble: %p\n", ptrdoble);

    *ptrsimple = 10;
    printf("Modificacion de x desde ptrsimple: %d\n", *ptrsimple);

    **ptrdoble = 24;
    printf("Modificacion de x desde ptrdoble: %d\n", **ptrdoble);
}
