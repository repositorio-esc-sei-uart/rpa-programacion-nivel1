#include <stdio.h>

int main()
{
    int a, b, aux=0;

    printf("a = ");  // a tiene que ser menor
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);  // b tiene que ser mayor

    if(a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    printf("a = %d \t b = %d", a, b);
    return 0;
}
