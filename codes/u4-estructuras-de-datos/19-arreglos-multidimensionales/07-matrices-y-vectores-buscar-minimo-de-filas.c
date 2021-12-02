#include <stdio.h>
#include <stdlib.h>
#define FILAS 5
#define COLUMNAS 5

int buscarmenor(int fila[COLUMNAS]);
void cargarmatriz(int m[FILAS][COLUMNAS]);
void mostrarmatriz(int m[FILAS][COLUMNAS]);

int main()
{   int m[FILAS][COLUMNAS], fila, menor;
    srand(time(0));
    cargarmatriz(m);
    mostrarmatriz(m);

    printf("\nIngrese un numero de fila [0,%d]: ", FILAS-1);
    scanf("%d", &fila);
    if(fila >=0 && fila<FILAS) {
        menor = buscarmenor(m[fila]);  // se envia la direccion de memoria de la fila
        printf("\nEl valor minimo de la fila %d es %d",fila, m[fila][menor]);
    }
    return 0;
}

int buscarmenor(int fila[COLUMNAS])
{   int menor = fila[0], posmenor=-1;
    for (int i=1 ; i<COLUMNAS; i++)
        if(fila[i]<menor) {
            menor = fila[i];
            posmenor = i;
        }
    return posmenor;
}

void cargarmatriz(int m[FILAS][COLUMNAS])
{   int f, c;
    // ciclo externo: recorre todas las filas
    for (f = 0; f < FILAS; f++)
    {   // ciclo interno: recorre todas las columnas de cada fila
        for (c = 0; c < COLUMNAS; c++)
            m[f][c] = 10 + rand()%(41);  // asignación a un elemento
    }
}
void mostrarmatriz(int m[FILAS][COLUMNAS])
{   int f, c;
    for (f=0; f<FILAS; f++){
        printf("[%d] ", f);
        for (c=0; c<COLUMNAS; c++)
            printf("%5d", m[f][c]);
        printf("\n");  // nueva linea por cada fila recorrida
    }
}

