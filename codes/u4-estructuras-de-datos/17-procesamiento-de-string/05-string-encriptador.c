#include <stdio.h>
#define LONGITUD 30
void encriptar(char entrada[LONGITUD], char salida[LONGITUD]);

int main()
{   char palabra[LONGITUD] = "\0", encriptada[30] = "\0";

    printf("Ingrese una palabra: ");
    gets(palabra); fflush(stdin);
    encriptar(palabra, encriptada);
    printf("Palabra encriptada: %s\n", encriptada);
}

void encriptar(char entrada[LONGITUD], char salida[LONGITUD])
{   int i;
    for (i=0; entrada[i]!='\0'; i++)  // for (i=0; i < strlen(entrada); i++)  -> recorre una frase o palabra (\0)
    {   switch (entrada[i])
        {   case 'M': case 'm':
                salida[i] = '0'; break;
            case 'U': case 'u':
                salida[i] = '1'; break;
            case 'R': case 'r':
                salida[i] = '2'; break;
            case 'C': case 'c':
                salida[i] = '3'; break;
            case 'I': case 'i':
                salida[i] = '4'; break;
            case 'E': case 'e':
                salida[i] = '5'; break;
            case 'L': case 'l':
                salida[i] = '6'; break;
            case 'A': case 'a':
                salida[i] = '7'; break;
            case 'G': case 'g':
                salida[i] = '8'; break;
            case 'O': case 'o':
                salida[i] = '9'; break;
            default:
                salida[i] = entrada[i]; break;
        } //fin switch
    } //fin for
}
