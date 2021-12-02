#include <stdio.h>
#define N 2
typedef struct
{   int codpostal;
    char nombre[40];
} TLocalidad;

int main()
{   TLocalidad loc[N];
    char *nombre = "ejemplo2.dat";
    FILE *archivo = fopen(nombre, "w");

    if(archivo == NULL) {
        printf("Problemas en la creacion del archivo\n");
        exit(1);
    }

    for (int i=0; i<N; i++)
    {
        printf("Registro %d: \n", i+1);
        printf(" Cod. Postal: "); scanf("%d", &loc[i].codpostal);
        fflush(stdin);
        printf(" Localidad: "); gets(loc[i].nombre);

        fprintf(archivo, "%d %s", loc[i].codpostal, loc[i].nombre);
        if(i<N-1) fprintf(archivo, "\n");
    }
    printf("\n *** Archivo grabado exitosamente ***");

    fflush(archivo);    // limpia el buffer intermedio del stream
    fclose(archivo);    // cierra el canal de tansmisión del archivo
}
