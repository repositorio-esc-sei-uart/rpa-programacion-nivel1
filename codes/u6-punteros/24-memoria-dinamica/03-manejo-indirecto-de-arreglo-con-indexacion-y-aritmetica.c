#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 5
int main()
{
    int vec[TAMA];
    int *ptr;
    srand(time(0));

    ptr = vec;

    printf("Carga de vector mediante ptr con aritmetica de punteros\n");
    for (int i=0; i<TAMA; i++)
        *(ptr + i) = rand()%40;

    printf("\nVector resultante (mediante ptr con indexacion)\n");
    for (int i=0; i<TAMA; i++)
        printf(" %d ", ptr[i] );
    printf("\nVector resultante (mediante ptr con aritmetica de punteros)\n");
    for (int i=0; i<TAMA; i++)
        printf(" %d ", *(ptr + i) );

    printf("\n");
    return 0;
}
