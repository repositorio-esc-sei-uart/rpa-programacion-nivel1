#include <stdio.h>

int main()
{
    FILE *archivo;

    // apertura de archivo con verificaci�n de existencia
    archivo = fopen("archivos\\ejemplo1.txt", "rt");
    if(archivo == NULL)
    {
        puts("Error en la operaci�n de apertura");
        exit(1);
    }

    // procesamiento del archivo
    // ...

    fclose(archivo);

    // apertura de archivo existente con creaci�n de archivo solo si no existe
    archivo = fopen("archivos\\ejemplo2.dat", "rt");
    if(archivo == NULL)
    {
        archivo = fopen("archivos\\ejemplo2.dat", "wt");
        if (archivo == NULL)
        {
            puts("Error en la creaci�n del archivo");
            exit(1);
        }
    }

    // creaci�n de archivo con sobreescritura en caso que exista
    archivo = fopen("archivos\\ejemplo2.tmp", "w+b");
    if(archivo == NULL)
    {
        puts("Error en la creaci�n del archivo");
        exit(1);
    }


    //archivo de texto - modo escritura
    archivo = fopen("ejemplo2.txt", "wt");

    // archivo de texto - modo a�adir
    archivo = fopen("C:\\archivos\\ejemplo3.txt", "at");

    // archivo binario - modo escritura
    archivo = fopen("datos1.dat", "wb");

    // archivo binario - modo lectura/escritura
    archivo = fopen("datos2.dat", "r+b");
}
