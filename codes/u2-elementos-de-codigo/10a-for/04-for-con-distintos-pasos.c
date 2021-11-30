#include <stdio.h>
int main()
{
    int i;

    printf("\nIteracion en forma ascendente con paso 1:\n");
    for (i=0; i<10; i++)
        printf("%3d", i);

    printf("\nIteracion en forma ascendente con paso 2:\n");
    for (i=0; i<10; i+=2)  // i = i + 2
        printf("%3d", i);

    printf("\nIteracion en forma descendente con paso -1:\n");
    for (i=10; i>0; i--)  // i = i - 1
        printf("%3d", i);

    printf("\nIteracion en forma descendente con paso -5:\n");
    for (i=10; i>0; i-=5)  // i = i - 5
        printf("%3d", i);

    printf("\n");
}
