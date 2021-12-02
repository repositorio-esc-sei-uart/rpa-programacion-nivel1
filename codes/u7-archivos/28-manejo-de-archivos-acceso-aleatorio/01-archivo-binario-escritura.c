#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT 5

int main()
{
    char* nombre = "numeros.dat";
    FILE* archivo = fopen(nombre, "wb");
    int bytes, bloques, num, vec[CANT];

    srand(time(0));

    if(archivo == NULL)
    {   printf("No se pudo crear o abrir el archivo");
        exit(0);
    }

    // escribir numero a numero: 1 bloque
    bytes = 0;
    for (int i=0; i < CANT; i++)
    {   num = 1 + rand()%10;
        bloques = fwrite(&num, sizeof(int), 1, archivo);
        vec[i] = 20 + rand()%10;
        bytes = bytes + bloques*sizeof(int);
    }

    // escribir un conjunto de numeros: varios bloques
    bloques = fwrite(vec, sizeof(int), CANT, archivo);
    bytes = bytes + bloques*sizeof(int);

    printf("Escritura de archivo finalizada (%d bytes transferidos)\n", bytes);

    fclose(archivo);
}
