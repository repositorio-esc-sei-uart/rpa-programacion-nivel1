#include <stdio.h>

int x = 10;
float z = 11.2;
char car = 'b';

int main()
{
    int x = 90;
    int y = 30;
    int i = 0;

    printf("Variables locales a main: x=%d, y=%d, i=%d \n", x, y, i);
    printf("Variables globales visibles desde main: x=%d, car=%c, z=%.2f \n", x, car, z);
}
