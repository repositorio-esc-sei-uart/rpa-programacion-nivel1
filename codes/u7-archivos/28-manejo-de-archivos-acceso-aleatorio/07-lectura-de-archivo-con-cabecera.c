#include <stdio.h>

typedef struct {
    int cant;
    long bytes;
    int dia, mes, anio;
} TCabecera;

FILE* abrir(char* nombre, char* modo);
int main(){
    srand(time(0));
    TCabecera cabecera;
    int num = 0;

    FILE* archivo = abrir("ejemplo.cab", "rb");
    fread(&cabecera, sizeof(cabecera), 1, archivo);
    printf("CABECERA DE INFORMACION:\n");
    printf("Cantidad de registros: %d\n", cabecera.cant);
    printf("Tamanio de cada registro: %ld\n", cabecera.bytes);
    printf("Fecha de registro: %d/%d/%d\n\n", cabecera.dia,
           cabecera.mes, cabecera.anio);
    printf("CONTENIDO:\n");
    for (int i=0; i < cabecera.cant; i++) {
        fread(&num, cabecera.bytes, 1, archivo);
        printf(" %d ", num);
    }
    printf("\n\nOperacion de lectura terminada [%ld bytes leidos]\n",
           ftell(archivo));
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
