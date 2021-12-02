#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1;
    float *ptr2;
    char *ptr3;

    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (float *)malloc(sizeof(float));
    ptr3 = (char *)malloc(sizeof(char));

    printf("Direcciones dinamicas\n");
    printf("ptr1: %p\n", ptr1);
    printf("ptr2: %p\n", ptr2);
    printf("ptr3: %p\n", ptr3);

    *ptr1 = 10;
    *ptr2 = 3.4;
    *ptr3 = 'P';

    printf("\nContenido de direcciones dinamicas\n");
    printf("acceso desde ptr1: %d\n", *ptr1);
    printf("acceso desde ptr2: %.2f\n", *ptr2);
    printf("acceso desde ptr3: %c\n", *ptr3);
}
