#include <stdio.h>

int main()
{
    int codigo = 32000;
    double decimal = 3443233434.00;

    printf("El caracter de codigo %d es %c \n", codigo, (char)codigo);
    printf("El valor double %.2lf forzado a int %d \n", decimal, (int)decimal);
}
