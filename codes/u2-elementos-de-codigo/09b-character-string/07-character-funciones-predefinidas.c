#include <stdio.h>
#include <ctype.h>
int main()
{   char caracter;
    printf("Ingrese cualquier caracter: ");
    scanf("%c", &caracter);
    printf("Informacion del caracter ingresado: \n\n");
    if(isalnum(caracter))
    {   printf("Es un caracter alfanumerico.\n");
        if(isalpha(caracter))
        {   printf("Es una letra. %d \n", isalpha(caracter));
            if (islower(caracter))
                printf("En minuscula. Conversion a mayuscula: %c \n", toupper(caracter));
            else
                printf("En mayuscula. Conversión a minuscula: %c \n", tolower(caracter));
        }
        if(isdigit(caracter))
            printf("Es un digito.\n");
    }
    else
    {   if(ispunct(caracter))
            printf("Es un simbolo.\n");
        else
            if(iscntrl(caracter))
                printf("Es un caracter de control.\n");
            else
                printf("Caracter no definido.\n");
    }
}
