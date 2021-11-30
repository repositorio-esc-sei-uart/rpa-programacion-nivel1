/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
int main() {

	int opcion1 = 0;  // trabaja con el menu principal
	int opcion2 = 0;  // trabaja con el submenu de la opcion 2
	printf("Menu Principal: \n");
	printf("(1) Cargar planilla\n");
	printf("(2) Modificar planilla\n");
	printf("(3) Eliminar planilla\n");
	printf("Seleccione un nro de opcion:\n");
	scanf("%d",&opcion1);
	switch (opcion1)
	{
        case 1:
            {
                printf("Planilla cargada\n");
                break;
            }
        case 2:
            printf("Submenú Modificar planilla:\n");
            printf("(21) Modificar nombre y apellido\n");
            printf("(22) Modificar legajo\n");
            printf("(23) Modificar notas\n");
            printf("Seleccione un nro de opcion:\n");
            scanf("%d",&opcion2);
            switch (opcion2)
            {
                case 21:
                    printf("Nombre y apellido modificado\n");
                    break;
                case 22:
                    printf("Legajo modificado\n");
                    break;
                case 23:
                    printf("Notas modificadas\n");
                    break;
                default:
                    printf("Opción incorrecta - Modificacion cancelada\n");
            }
            break;
        case 3:
            printf("Planilla eliminada\n");
            break;
        default:
            printf("opción incorrecta - Sesion terminada\n");
	}
	return 0;
}

