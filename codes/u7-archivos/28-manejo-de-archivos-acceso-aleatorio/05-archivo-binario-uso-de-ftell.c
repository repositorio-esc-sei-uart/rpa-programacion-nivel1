#include <stdio.h>

FILE* abrir(char* nombre, char* modo);

int main()
{   long pos;
    double num = 3452.22;
    FILE* archtex = abrir("datos.txt", "wt");
    FILE* archbin = abrir("datos.bin", "wb");

    fprintf(archtex, "programacion");
    pos = ftell(archtex);
    printf("Posicion actual del archivo de texto: %ld\n", pos);
    fwrite(&num, sizeof(num), 1, archbin);
    pos = ftell(archbin);
    printf("Posicion actual del archivo binario: %ld\n", pos);
    fclose(archtex);
    fclose(archbin);
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
