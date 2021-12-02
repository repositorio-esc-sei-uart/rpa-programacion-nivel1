#include <stdio.h>

int main()
{
    int c, n;
    char *nombre = "ejemplo1.txt";
    FILE *archivo = fopen(nombre, "rt");

    if(archivo == NULL)
    {
        printf("Problemas en la creacion del archivo\n");
        exit(1);
    }

    n = 1;
    do
    {
        c = getc(archivo);
        if(c == '\n')
            n++;

    } while( c!=EOF );

    printf("El archivo %s contiene %d lineas\n", nombre, n);

    fflush(archivo);    // limpia el buffer intermedio del stream
    fclose(archivo);    // cierra el canal de tansmisión del archivo
}
