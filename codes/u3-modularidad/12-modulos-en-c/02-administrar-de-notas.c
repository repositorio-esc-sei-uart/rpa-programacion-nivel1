/**
    Ejemplo de clase 12
**/

#include <stdio.h>

// (1) declaración de prototipos de funciones de usuario
void mostrarmenu();
float promedio3(int n1, int n2, int n3);

int main()
{
    int nota1=-99, nota2=-99, nota3=-99;
    float prom;
    int opcion = 0;

    while(opcion!=3)
    {
        // (3) invocación de función de usuario
        mostrarmenu();

        printf("Seleccion opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
            case 1:
                printf("Ingrese nota 1: "); scanf("%d", &nota1);
                printf("Ingrese nota 2: "); scanf("%d", &nota2);
                printf("Ingrese nota 3: "); scanf("%d", &nota3);

                break;
            case 2:
                if(nota1!=-99 && nota2!=-99 && nota3!=-99)
                {
                    prom = promedio3(nota1, nota2, nota3); // parametros actuales
                    printf("El promedio es %.2f\n", prom);
                } else
                    printf("No se ha cargado notas\n");

                break;
            case 3: printf("Terminar la sesion\n"); break;
            default: printf("Opcion invalida\n");
        }

    }


    return 0;
}

// (2) definición de prototipos de funciones de usuario
void mostrarmenu()
{
    printf("Menu de opciones\n");
    printf("(1) Cargar notas\n");
    printf("(2) Calcular promedio\n");
    printf("(3) Salir\n");
}

float promedio3(int n1, int n2, int n3)  // parametros formales
{
    float promedio = (n1 + n2 + n3) / 3.0;

    return promedio;
}
