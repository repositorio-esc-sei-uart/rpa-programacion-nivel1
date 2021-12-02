#include <stdio.h>
#define TAMA 5

int main()
{
    int vec[TAMA];
    int *ptr;

    ptr = vec;  // equivalente a: ptr = &vec[0];

    printf("Direccion del comienzo (&vec[0]): %p \n", &vec[0]);
    printf("Direccion del comienzo mediante ptr: %p \n", ptr);
}
