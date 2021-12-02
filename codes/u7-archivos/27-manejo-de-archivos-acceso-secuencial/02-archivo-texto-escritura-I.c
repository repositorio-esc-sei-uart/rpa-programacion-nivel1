#include <stdio.h>

int main()
{
    char *nombre = "ejemplo1.txt";
    FILE *archivo = fopen(nombre, "w");

    if(archivo == NULL)
    {
        printf("Problemas en la creacion del archivo\n");
        exit(1);
    }

    // un caracter alfabético
    putc('A', archivo);
    putc('B', archivo);
    // un caracter especial de nueva linea
    fputc('\n', archivo);
    // una cadena de caracteres
    fputs("Resolucion de Problemas y Algoritmos\n", archivo);
    // una cadena formateada
    fprintf(archivo, "Dirección de comienzo de archivo: %p", archivo);

    printf("El archivo %s ha sido escrito exitosamente\n", nombre);

    fflush(archivo);    // limpia el buffer intermedio del stream
    fclose(archivo);    // cierra el canal de tansmisión del archivo
}
