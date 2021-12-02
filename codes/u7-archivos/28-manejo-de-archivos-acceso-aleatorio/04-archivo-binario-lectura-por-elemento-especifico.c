#include <stdio.h>

FILE* abrir(char* nombre, char* modo);

int main()
{   int num;
    FILE* archivo = abrir("numeros.dat", "rb");

    printf("Contenido del archivo: \n");
    mostrar(archivo);

    // desplazar 0 bytes desde el inicio
    fseek(archivo, 0, SEEK_SET);  // equivalente a rewind(archivo);
    fread(&num, sizeof(int), 1, archivo);
    printf("\nPrimer numero: %d\n", num);
    // desplazar 3 números hacia adelante desde la posición actual (2do nro)
    fseek(archivo, 3*sizeof(int), SEEK_CUR);
    fread(&num, sizeof(int), 1, archivo);
    printf("\nQuinto numero: %d\n", num);
    // desplazar 1 número hacia atras desde el final
    fseek(archivo, -sizeof(int), SEEK_END);
    fread(&num, sizeof(int), 1, archivo);
    printf("\nUltimo numero: %d\n", num);

    fclose(archivo);
}

void mostrar(FILE *pf)
{   int num, bloques;
    while(!feof(pf))
    {   bloques = fread(&num, sizeof(int), 1, pf);
        if(bloques > 0)
            printf("%d ", num);
    }
    printf("\n");
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
