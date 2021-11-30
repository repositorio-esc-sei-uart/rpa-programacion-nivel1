#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));
    float x;

    x = (float)rand()/3;  // se obtiene un entero aleatorio entre 0 y RANDMAXINT y se fracciona en cualquier valor mayor que 2
    printf("Aleatorio de punto flotante: %f\n", x);

    // rango de numeros decimales entre [0, 1] con distintos rangos de precisión

    // se obtiene un entero aleatorio entre 0 y 10 fracciona en 10 (usar cast).
    // Por ejemplo:
    // 0/10 = 0.0
    // 1/10 = 0.1
    // 2/10 = 0.2
    x = rand()%11 / 10.0;  // equivalente a rand()%(10 - 0 + 1) / 10.0
    printf("Aleatorio flotante entre 0 y 1 con un decimal de precisión: %f\n", x);

    // se obtiene un entero aleatorio entre 0 y 100 fracciona en 100 (usar cast).
    // Por ejemplo:
    // 0/100 = 0.00
    // 17/100 = 0.17
    // 99/100 = 0.99
    // 100/100 = 1.00
    x = rand()%101 / 100.0; // equivalente a rand()%(100 - 0 + 1) / 100.0
    printf("Aleatorio flotante entre 0 y 1 con dos decimales de precisión: %f\n", x);

    // se obtiene un entero aleatorio entre 0 y 1000 fracciona en 1000 (usar cast).
    // Por ejemplo:
    // 0/1000 = 0.000
    // 17/1000 = 0.017
    // 99/1000 = 0.099
    // 125/1000 = 0.125
    x = rand()%1001 / 1000.0;  // equivalente a rand()%(1000 - 0 + 1) / 1000.0
    printf("Aleatorio flotante entre 0 y 1 con tres decimales de precisión: %f\n", x);


    return 0;
}
