#include <stdio.h>

FILE* abrir(char* nombre, char* modo);

int main()
{   int total, bloques, num;

    FILE* archivo = abrir("numeros.dat", "rb");

    // leer numero a numero: 1 bloque
    total = 0;
    while(!feof(archivo))
    {   bloques = fread(&num, sizeof(int), 1, archivo);
        if(bloques > 0) total += bloques;
    }

    printf("Cantidad de numeros almacenados: %d\n", total);

    // crear un arreglo dinamico para almacenar la cantidad de elementos
    int* vec = (int *)malloc(sizeof(int)*total);
    // posicionar puntero al inicio del archivo para leer nuevamente
    rewind(archivo);
    // leer un conjunto de numeros: varios bloques
    bloques = fread(vec, sizeof(int), total, archivo);

    for (int i=0; i<bloques; i++)
        printf(" %d ", vec[i]);

    fclose(archivo);
}

FILE* abrir(char* nombre, char* modo)
{
    FILE *pf = fopen(nombre, modo);

    if(pf == NULL)
    {   printf("No se pudo abrir el archivo");
        exit(0);
    }
    return pf;
}
