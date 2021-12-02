#include <stdio.h>
#include <string.h>
#define MAXS 20

void mostrartodo(char s[MAXS]);
void mostrarcontenido(char s[MAXS]);

main()
{
    // observe la diferencia de la salida por pantalla de mostrartodo y mostrarcontenido
    // ¿cuál sería el correcto?
    char palabra[MAXS];
    printf("Ingrese una palabra: ");
    gets(palabra);
    printf("\nArreglo completo (longitud max %d): ", MAXS);
    mostrartodo(palabra);
    printf("\nSolo contenido almacenado (largo %d): ", strlen(palabra));
    mostrarcontenido(palabra);
}

void mostrartodo(char s[MAXS])
{
    for (int i=0; i<MAXS; i++)  // recorre todos los elementos del arreglo
        printf("%c", s[i]);
    printf("\n");
}

void mostrarcontenido(char s[MAXS])
{
    for (int i=0; i<strlen(s); i++)  // recorre solo los elementos que componen la cadena almacenada
        printf("%c", s[i]);
    printf("\n");
}
