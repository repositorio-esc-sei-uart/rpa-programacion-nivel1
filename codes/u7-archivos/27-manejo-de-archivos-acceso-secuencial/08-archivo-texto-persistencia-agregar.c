#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE* abrir(char *nombre, char *modo);

int main()
{   int n, num, opcion=1;
    FILE* archivo;
    srand(time(0));

    do {
        printf("Cantidad de aleatorios para guardar: ");
        scanf("%d", &n);

        archivo = abrir("numeros.dat", "a+");
        for (int i=0; i<n; i++) {
            num = 1+rand()%99;
            fprintf(archivo, "%d\n", num);
            printf(" %d ", num);
        }
        fclose(archivo);

        printf("\nGuardar mas aleatorios? (1-Si | 0-No): ");
        scanf("%d", &opcion);
    } while(opcion!=0);
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
