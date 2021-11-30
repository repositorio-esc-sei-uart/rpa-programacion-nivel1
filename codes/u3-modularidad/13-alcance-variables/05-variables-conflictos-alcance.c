#include <stdio.h>

void mifuncion();

int x = 20;

int main()
{
    int y = 76;

    printf("valor de x global en main: %d \n", x);
    printf("valor de y local en main: %d \n", y);

    mifuncion();
}

void mifuncion()
{
    int y = 5;
    int x = 12; // oculta la presencia del x global

    printf("valor de x global en mifuncion: %d \n", x);
    printf("valor de y local en mifuncion: %d \n", y);
}
