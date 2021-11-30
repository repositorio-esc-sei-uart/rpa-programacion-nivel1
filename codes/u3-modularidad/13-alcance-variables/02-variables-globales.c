#include <stdio.h>
#define MAX 100
/* declarciones de funciones */
void mostrar();
/*declaracion e inicialización de variables globales*/
int x = 10;
float z = 11.2;
char car = 'b';
const float PI = 3.141596;  // constante global



int main()
{
    // local a main
    int y = 30;
    int i = 0;
    int x = 9;  // conflicto de visibilidad

    printf("[main] Variables locales a main: y=%d, i=%d \n", y,i);
    printf("[main] Variables globales visibles desde main: x=%d, car=%c, z=%.2f \n", x, car, z);
    printf("[main] Constante global: PI %.2f  MAX %d", PI, MAX);
    mostrar();

    int n = 0;
    printf("Ingrese un entero: ");
    scanf("%d", &n);
    printf("n=%d", n);
}

void mostrar() {
    printf("[mostrar] Variables globales visibles desde main: x=%d, car=%c, z=%.2f \n", x, car, z);
    // printf("[mostrar] Variables locales a main: y=%d, i=%d \n", y,i);  NO ESTA PERMITIDO
}
