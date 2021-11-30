#include <stdio.h>

/* declaracion de funciones: qué */
float promedio(int n1, int n2, int n3); // 1,2,3  --- 3, 2, 1


int main()
{
    int nota1, nota2, nota3;
    float prom = 0.0;

    printf("[main] Ingrese nota 1: "); scanf("%d", &nota1);
    printf("[main] Ingrese nota 2: "); scanf("%d", &nota2);
    printf("[main] Ingrese nota 3: "); scanf("%d", &nota3);

    printf("[main] prom local antes de invocar funcion %.2f\n", prom);
    prom = promedio(nota1, nota2, nota3);  // invocación (uso de una función)

    printf("[main] El promedio es %.2f\n", prom);

    return 0;
}

/* definicion de funciones: cómo lo hace (pasos)*/

float promedio(int n1, int n2, int n3)
{
    float prom = 1;
    printf("[promedio] prom local antes del calculo %.2f\n", prom);
    prom = (n1 + n2 + n3) / 3.0;
    //mostrarMensaje();  // invocación
    return prom;
}


