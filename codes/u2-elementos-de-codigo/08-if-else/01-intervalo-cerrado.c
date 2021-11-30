#include <stdio.h>

int main()
{
    int x;

    printf("Ingrese valor entre 10 y 90: ");
    scanf("%d", &x);
    // el uso de llaves en el if y else es opcional para el caso de un bloque con UNA instrucción
    if ( (x >= 10) && (x <= 90) )
        printf("%d pertenece a [10 y 90]", x);
    else  // x<10 || x>90
        printf("%d no pertenece a [10 y 90]", x);

    return 0;
}
