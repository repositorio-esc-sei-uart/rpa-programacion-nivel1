/* RPA.
Descr. Ejemplo de declaracion e inicializacion de arreglos 
*/

#include <stdio.h>
#define MAXV 4   // constante simbolica
//const int MAXV1 = 4;  // celda de memoria de valor constante

void main() {
    int vint1[MAXV];  // un arreglo o vector de enteros de tamano MAXV
    float vfloat1[MAXV];  // un arreglo o vector de punto flotante de tamaño MAXV
    char cadena1[MAXV];   // cadena de caracteres o arreglo de char

    int vint2[] = {23, 45, 23, 53};  // N=4
    int vint3[MAXV] = {34, 67, 45, 76};   // vint3[0]  y  vint3[MAXV-1]
    float vfloat3[] = {34.2, 12.9, 21.5, 25.7};
    char cadena2[] = {'H', 'O', 'L', 'A', '\0'}; // cadena2[3]
    char cadena3[MAXV] = {'D', 'E', 'F', '\0'};
    char cadena4[] = "HOLA\0";
    char cadena5[MAXV] = "GHI\0";


    printf("%s\n", cadena2);

    cadena2[2] = 'J';
    printf("%s\n", cadena2);

    cadena2 = 'P'; // error sintaxis
    cadena2[0] = "P"; // error logico
    printf("%s", cadena2);

}
