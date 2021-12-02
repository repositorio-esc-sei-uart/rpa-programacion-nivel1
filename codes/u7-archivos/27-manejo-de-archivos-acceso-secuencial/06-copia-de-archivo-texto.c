#include <stdio.h>
#define TAMA 128
FILE* abrir(char *nombre, char *modo);
void copiar(FILE* orig, FILE* dest);

int main()
{   char *nombre = "ejemplo2.dat";
    FILE* origen = abrir(nombre, "r");
    FILE* destino = abrir("backup1.tmp", "w+");

    copiar(origen, destino);
    printf("\n Copia de %s terminada\n", nombre);
    fclose(origen);
    fclose(destino);
}

FILE* abrir(char *nombre, char *modo)
{
    FILE *archivo = fopen(nombre, modo);
    if(archivo==NULL) {
        printf("No se pudo abrir el archivo %s\n", nombre);
        exit(-1);
    }
    return archivo;
}

void copiar(FILE* orig, FILE* dest)
{   char buffer[TAMA];

    while(!feof(orig)) {
        fgets(buffer, TAMA, orig);
        fprintf(dest, "%s", buffer);
    }
}
