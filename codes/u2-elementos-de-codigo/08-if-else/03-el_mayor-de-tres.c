#include <stdio.h>

// Suposición: Este programa trabaja con distintos numeros

int main()
{
    int a, b, c;

    printf("Ingrese tres numeros enteros: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if( (a > b) && (a > c) )
    {
        printf("%d es el mayor", a);
        printf("\n----------");
    }
    else
    {
        if(b > c)
            printf("%d es el mayor", b);
        else
            printf("%d es el mayor", c);
    }
}
