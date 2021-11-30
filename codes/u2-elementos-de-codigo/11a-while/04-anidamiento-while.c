#include <stdio.h>

int main()
{
    int opcion;  // variable de control del while exterior
    int cant;
    int i;  // variable de control del while interior
    opcion = 0;  // inicializacion

    while(opcion!=2);  // condicion de parada
    {
        printf("\nMenu de opciones:\n");
        printf("(1) Generar nros consecutivos a partir de 1:\n");
        printf("(2) Salir\n");
        printf("Seleccione numero de opcion: ");
        scanf("%d", &opcion);   // modificacion o alteracion

        switch(opcion)
        {
            case 1:
                printf("\n Cantidad de consecutivos: ");
                scanf("%d", &cant);
                i = 1;  // iniicalizacion
                while(i <= cant) // condicion de parada
                {   printf(" %d ", i);
                    i++;   // modificacion
                }
                break;
            case 2:  // salir
                printf("\n Termina sesion\n");
                break;
            default:
                printf("\n Opcion invalida\n");
        }
    }
}
