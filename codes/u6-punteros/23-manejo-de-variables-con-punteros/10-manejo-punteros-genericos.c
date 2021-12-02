#include <stdio.h>

int main()
{
    float x;
    int y;

    void *ptr;

    ptr = &x;
    printf("Direccion de x: %p \n", ptr);

    ptr = &y;
    printf("Direccion de y: %p \n", ptr);
}

