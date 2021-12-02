#include <stdio.h>
#define MAXV 5

int main()
{
    int vec[MAXV] = {10, 20, 30, 40, 50};

    printf("La referencia del arreglo es %p\n", vec);

    printf("El contenido del arreglo es: ");
    for (int i=0; i<MAXV; i++)
        printf("%4d", vec[i]);
    printf("\n");
}
