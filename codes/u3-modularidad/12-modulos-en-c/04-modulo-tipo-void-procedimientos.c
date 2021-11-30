/**
    Tema: Funcion de usuario de tipo void (procedimiento)
    Problema: Mostrar menú de opciones
**/

#include <stdio.h>

// (1) declaración del prototipo de función de usuario
void mostrarmenu();

int main()
{
    int opcion = 0;
    while(opcion!=3)
    {
        // (3) invocación de función de usuario
        mostrarmenu();

        printf("Seleccion opción: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
            case 1: printf("Cargando notas\n"); break;
            case 2: printf("Calculando promedio\n"); break;
            case 3: printf("Terminar la sesión\n"); break;
            default: printf("Opción inválida\n");
        }

    }


    return 0;
}

// (2) definición del prototipo de funcion de usuario
void mostrarmenu()
{
    printf("Menu de opciones\n");
    printf("(1) Cargar notas\n");
    printf("(2) Calcular promedio\n");
    printf("(3) Salir\n");
}
