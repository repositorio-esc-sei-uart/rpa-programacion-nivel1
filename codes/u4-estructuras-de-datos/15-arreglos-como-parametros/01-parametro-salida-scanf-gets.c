#include <stdio.h>
#define TAMA 20
int main()
{
    char letra;
    char frase[TAMA];

    printf("ingrese una letra: ");

    scanf("%c", &letra);  // el 2º parámetro pasa la referencia o dirección de letra para que pueda ser manipulada por scanf con el operador &

    printf ("ingrese una frase: ");

    fflush(stdin);
    gets(frase);  // pasa la refencia o dirección del comienzo de frase (el operador & es implicito solo en caso de arreglos)

    printf("\nletra: %c frase: %s\n", letra, frase);
}


