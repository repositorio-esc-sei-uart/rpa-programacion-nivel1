#include <stdio.h>

void mifuncion(int param);

int main()
{
    char letra = 'a';
    float decimal = 4.5;
    int entero = 5;
    mifuncion(decimal);  // coerción: se produce truncamiento
    mifuncion(letra);    // coerción: se convierte a entero (codigo ascii)
    mifuncion(entero);
}

void mifuncion(int param)
{
    printf("mifuncion recibio como parametro %d\n", param);
}
