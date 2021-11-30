#include <stdio.h>

int main()
{
    int a, b;
    float division1, division2;

    printf("Ingrese valor de a: ");
    scanf("%d", &a);
    printf("Ingrese valor de b: ");
    scanf("%d", &b);

    division1 = a / b;
    printf("La division de 2 enteros es %.2f \n", division1);
    division2 = (float)a / (float)b;
    printf("La division de 2 enteros con cast es %.2f \n", division2);
}
