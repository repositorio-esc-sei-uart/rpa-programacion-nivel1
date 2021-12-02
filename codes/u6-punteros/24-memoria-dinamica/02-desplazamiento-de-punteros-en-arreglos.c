#include <stdio.h>
#define TAMA 5
int main()
{
    int vec[TAMA];
    int *ptr;

    ptr = vec; // ptr = &vec[0];

    printf("Direccion inicial de ptr: %p\n", ptr);

    printf("\nAritmetica de punteros sin modificacion de ptr:\n");
    for (int i=0; i<TAMA; i++)
        printf("Direccion v[%i] = %p \n", i, ptr+i);

    printf("\nAritmetica de punteros con modificacion de ptr:\n");
    printf("Direccion actual de ptr: %p\n", ptr);
    ptr++; // ptr = ptr + 1;
    printf("Se desplaza hacia adelante 1 posicion: %p\n", ptr);
    ptr = ptr + 3;  // ptr += 3;
    printf("Se desplaza hacia adelante 3 posiciones: %p\n", ptr);
    ptr--; // ptr = ptr - 1;
    printf("Se desplaza hacia atras 1 posicion: %p\n", ptr);
    ptr = ptr - 2;  // ptr -= 2;
    printf("Desplaza hacia atras 2 posiciones: %p\n", ptr);
    return 0;
}
