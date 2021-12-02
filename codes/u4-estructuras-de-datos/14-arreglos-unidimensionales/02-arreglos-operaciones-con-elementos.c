#include <stdio.h>
#define TAMA 3

void main()
{
    int vec[TAMA];

    vec[0] = 45;   // asignar el valor 45 al elemento en la primera posición [0]
    vec[TAMA-1] = 76;  // asinar el valor 76 al elemento en la ultima posición [TAMA-1]

    // si quiero acceder a un elemento cuya posición excede el tamaño, estamos ante un desbordamiento (overflow)

    printf("ingrese un valor al vector: ");
    scanf("%d", &vec[1]); // &vec[0]

    printf("primer elemento: %d \n", vec[0]);
    printf("elemento intermedio: %d \n", vec[1]);
    printf("ultimo elemento: %d \n", vec[TAMA-1]);

}


