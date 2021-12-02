#include <stdio.h>

FILE* abrir(char* nombre, char* modo);

int main()
{   int total, bytes, bloques, num;

    FILE* archivo = abrir("numeros.dat", "rb");

    // leer numero a numero: 1 bloque
    total = 0;
    while(!feof(archivo))
    {   bloques = fread(&num, sizeof(int), 1, archivo);
        if(bloques > 0) {
            printf(" %d ", num);
            total += bloques;
        }
    }
    printf("\nCantidad de numeros leidos: %d\n", total);

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
