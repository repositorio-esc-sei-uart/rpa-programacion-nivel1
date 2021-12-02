#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 4
#define COLUMNAS 5
void cargarpares(int matriz[FILAS][COLUMNAS]);
void mostrarmatriz(int matriz[FILAS][COLUMNAS]);
main()
{   int m[FILAS][COLUMNAS];
    srand(time(0));
    cargarpares(m);
    printf("Matriz con %d valores aleatorios pares: \n", FILAS*COLUMNAS);
    mostrarmatriz(m);
}
void cargarpares(int matriz[FILAS][COLUMNAS])
{   int f, c, iteraciones, aleatorio;
    iteraciones = 0;
    for (f = 0; f < FILAS; f++) {
    /** Forma 1:
        c = 0;
        while(c < COLUMNAS) {
            aleatorio = 10 + rand()%41;
            if(aleatorio%2 == 0){
                matriz[f][c] = aleatorio;
                c++;
            }
            iteraciones++;
        }
    **/
    // forma 2:
        for(c=0; c<COLUMNAS; ) {
            aleatorio = 10 + rand()%41;
            if(aleatorio%2 == 0){
                matriz[f][c] = aleatorio;
                c++;
            }
            iteraciones++;
        }
    }
    printf("La cantidad de aleatorios generados es %d\n", iteraciones);
}

void mostrarmatriz(int matriz[FILAS][COLUMNAS])
{   int f, c;
    for (f=0; f<FILAS; f++){
        for (c=0; c<COLUMNAS; c++)
            printf("%5d", matriz[f][c]);
        printf("\n");
    }
}
