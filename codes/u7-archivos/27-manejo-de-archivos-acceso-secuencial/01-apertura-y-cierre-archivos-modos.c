#include <stdio.h>

int main()
{
    FILE *archivo;

    // apertura de archivo con verificación de existencia
    archivo = fopen("archivos\\ejemplo1.txt", "rt");
    if(archivo == NULL)
    {
        puts("Error en la operación de apertura");
        exit(1);
    }

    // procesamiento del archivo
    // ...

    fclose(archivo);

    // apertura de archivo existente con creación de archivo solo si no existe
    archivo = fopen("archivos\\ejemplo2.dat", "rt");
    if(archivo == NULL)
    {
        archivo = fopen("archivos\\ejemplo2.dat", "wt");
        if (archivo == NULL)
        {
            puts("Error en la creación del archivo");
            exit(1);
        }
    }

    // creación de archivo con sobreescritura en caso que exista
    archivo = fopen("archivos\\ejemplo2.tmp", "w+b");
    if(archivo == NULL)
    {
        puts("Error en la creación del archivo");
        exit(1);
    }


    //archivo de texto - modo escritura
    archivo = fopen("ejemplo2.txt", "wt");

    // archivo de texto - modo añadir
    archivo = fopen("C:\\archivos\\ejemplo3.txt", "at");

    // archivo binario - modo escritura
    archivo = fopen("datos1.dat", "wb");

    // archivo binario - modo lectura/escritura
    archivo = fopen("datos2.dat", "r+b");
}
