#include <stdio.h>

#define CANT_ALUMNOS 2
#define CANT_NOTAS 3

int main()
{
    int alumno, n, nota, suma;
    float promedio;

    for (alumno = 1; alumno <= CANT_ALUMNOS; alumno++)
    {
        printf("ALUMNO %d: \n", alumno);
        // calcular el promedio de notas de cada alumno
        suma = 0;
        for (n = 1; n <= CANT_NOTAS; n++)
        {
            printf("nota %d: ", n);
            scanf("%d", &nota);
            suma = suma + nota;  // suma =+ nota;
        }
        promedio = (float)suma / (float)CANT_NOTAS;
        printf("Promedio del alumno %d: %.2lf \n", alumno, promedio);
    }
}
