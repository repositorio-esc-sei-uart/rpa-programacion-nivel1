#include <stdio.h>
int main()
{
    char letra;
    printf("Ingresar 's' o 'n':");
    scanf("%c", &letra);
    switch (letra)
    {
        case 's':
        case 'S':
            printf("opcion si \n");
            break;
        case 'n':
        case 'N':
            printf("opcion no \n");
            break;
        default:
            printf("caracter invalido");
    }
}
