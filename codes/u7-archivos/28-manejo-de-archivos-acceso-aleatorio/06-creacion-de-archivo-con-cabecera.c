#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int cantidad;   // cantidad de valores
    long bytes;     // bytes de cada componente
    int tipo;       // 1-punto de la recta | 2-punto del plano
} TCabecera;

FILE* abrir(char* nombre, char* modo);
void cargarInfoUsuario(TCabecera *c);
int main(){
    srand(time(0));
    TCabecera cabecera;
    int num = 0;
    FILE* archivo = abrir("ejemplo.cab", "wb");

    cargarInfoUsuario(&cabecera);
    cabecera.bytes = sizeof(num);
    // Grabar cabecera
    fwrite(&cabecera, sizeof(cabecera), 1, archivo);
    // Grabar contenido
    for (int i=0; i < cabecera.cantidad; i++) {
        num = 10 + rand()%90;
        fwrite(&num, cabecera.bytes, 1, archivo);
    }
    printf("Archivo grabado [%ld bytes transferidos]\n", ftell(archivo));
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

void cargarInfoUsuario(TCabecera *c)
{
    printf("Cantidad de puntos a generar: ");
    scanf("%d", &(c->cantidad));
    do {
        printf("Tipo de punto: (1-Recta | 2-Plano): ");
        scanf("%d", &(c->tipo))
    } while ( (c->tipo != 1) || (c->tipo != 2) );
}
