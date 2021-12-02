#include <stdio.h>
#include <ctype.h>

void verificar(char c);

int main()
{   char caracter;
    printf("Ingrese cualquier caracter: ");
    scanf("%c", &caracter);
    printf("\nInformacion del caracter: \n");
    verificar(caracter);  // invocacion por copia o por valor
}
void verificar(char c)  // parametro de entrada
{   printf("Codigo ascii: %d \n", c);
    if(isalnum(c))
    {   printf("Es un caracter alfanumerico.\n");
        if(isalpha(c))
        {   printf("Es una letra. %c ", c);
            if (islower(c))
                printf("en minuscula. Conversion a mayuscula: %c \n", toupper(c));
            else
                printf("en mayuscula. Conversión a minuscula: %c \n", tolower(c));
        }
        if(isdigit(c))
            printf("Es un digito.\n");
    }
    else
    {   if(ispunct(c))
            printf("Es un simbolo.\n");
        else
            if(iscntrl(c))
                printf("Es un caracter de control.\n");
            else
                printf("Caracter no definido.\n");
    }
}
