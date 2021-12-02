#include <stdio.h>
#define CAPACIDAD 4

struct DiaSemana  {
    int codigo;
    char dia[10];
};
struct Tarea  {
    int coddia;
    int hora;
    char descripcion[30];
};
typedef struct DiaSemana DiaSemana;
typedef struct Tarea Tarea;

void mostrarTareas(Tarea arreglo[CAPACIDAD], DiaSemana dias[7]);
int buscar(DiaSemana vector[7], int cod);

int main()
{   int i, cod;
    DiaSemana dias[7] = { {1, "Lunes"}, {2, "Martes"}, {3, "Miercoles"}, {4, "Jueves"},
                          {5, "Viernes"}, {6, "Sabado"}, {7, "Domingo"} };
    Tarea tareas[CAPACIDAD];

    for(i=0; i<CAPACIDAD; i++) {
        cod = 0;
        while(buscar(dias, cod) == -1)  // buscar implementa busqueda secuencial
        {   printf("Codigo de dia (%d ... %d): ", dias[0].codigo, dias[6].codigo);
            scanf("%d", &cod);
        }
        tareas[i].coddia = cod; // almacena codigo existente en el otro arreglo relacionado
        printf("Hora (0 a 23):");  // verificar rango, si es invalido seguir solicitando
        scanf("%d", &tareas[i].hora);
        printf("Descripción de la tarea: "); fflush(stdin);
        gets(tareas[i].descripcion);
    }
    mostrarTareas(tareas, dias);
}

void mostrarTareas(Tarea arreglo[CAPACIDAD], DiaSemana dias[7])
{   int pos;
    for (int i=0; i<CAPACIDAD; i++)
    {
        printf("\nRegistro #%d", i+1);
        pos = buscar(dias, arreglo[i].coddia);
        printf("\nDia: (%d) %s", arreglo[i].coddia, dias[pos].dia);
        printf("\nHora: %d", arreglo[i].hora);
        printf("\nDescripcion: %s", arreglo[i].descripcion);
    }
}

int buscar(DiaSemana vector[7], int cod)
{
// metodo de busqueda secuencial
    int i=0, pos = -1;
    while (i<7 && pos == -1) {
        if(vector[i].codigo==cod)
            pos = i;
        i++;
    }
    return pos;
}



