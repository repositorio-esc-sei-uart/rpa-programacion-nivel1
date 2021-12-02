#include <stdio.h>
#define TAMA 128
FILE* abrir(char *nombre, char *modo);
void copiar(FILE* orig, FILE* dest);
void mostrar(FILE* orig);

int main()
{   char *nombre = "ejemplo2.dat";
    FILE* origen = abrir(nombre, "r");
    FILE* destino = abrir("backup1.tmp", "w+");

    // el puntero origen queda al final del archivo
    copiar(origen, destino);
    printf("[Copiar]: Backup de %s terminada\n", nombre);

    rewind(origen);  // desplaza el puntero origen al comienzo ("rebobinar")

    printf("\nContenido de %s: \n", nombre);
    mostrar(origen);
    printf("\n\nm[Mostrar]: Operacion de lectura finalizada\n");

    fclose(origen);
    fclose(destino);
}

void mostrar(FILE* orig)
{   char buffer[TAMA];

    while(!feof(orig)) {
        fgets(buffer, TAMA, orig);
        printf("%s", buffer);
    }
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
