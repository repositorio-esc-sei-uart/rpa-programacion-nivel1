#include <stdio.h>
#define TAMA 64
int main()
{
    char linea[TAMA];
    char *nombre = "ejemplo2.dat";
    FILE *archivo = fopen(nombre, "rt");

    if(archivo == NULL)
    {
        printf("Problemas en la creacion del archivo\n");
        exit(1);
    }

    printf("CONTENIDO DE ARCHIVO %s:\n\n", nombre);

    while(!feof(archivo))
    {
        fgets(linea, TAMA, archivo);
        printf("%s\n", linea);
    }

    printf("\n *** Operacion de lectura terminada *** \n");

    fflush(archivo);    // limpia el buffer intermedio del stream
    fclose(archivo);    // cierra el canal de tansmisión del archivo
}
