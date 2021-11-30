#include <stdio.h>
#include <stdlib.h>

// declaracion de la funcion: QUE
float promedio3(int a, int b, int c);
void imprimirSaludo();
void imprimirDespedida(int estado);


int main()  // modulo principal
{
    //variables locales: ....
    srand(time(0));
    imprimirSaludo();

    // invocaciones
    float prom1 = promedio3(10, 10, 9);  // parametros actuales: valores literales

    int n1=5, n2=8, n3=7;
    float prom2 = promedio3(n1, n2, n3); // parametros actuales: contenido de variables

    int practica = 5, teoria = 5;
    float prom3 = promedio3(practica + teoria, n2, n3); // parametros actuales: expresiones

    float prom4 = promedio3(1+rand()%10, 1+rand()%10, 1+rand()%10); // parametros acutales: invocacion a otras funciones

    printf("Primer promedio: %f\n", prom1);
    printf("Segundo promedio: %f\n", prom2);
    printf("Tercer promedio: %f\n", prom3);
    printf("Cuarto promedio: %f\n", prom4);

    imprimirDespedida(0);  // invocacion o llamada a funcion

    return 0;
}

// definicion de la funcion: COMO
float promedio3(int a, int b, int c)  // a, b, c y prom son variables locales a promedio3  / a, b y c son parametros formales
{   // variables locales a la funcion: ...
    float prom = (float)(a+b+c) / 3;
    return prom;
    //return (a + b +c) / 3.0;
}

void imprimirSaludo()
{
    printf("\nHola!\n");
    printf("Bienvenido a sesion de calculo de promedios\n");
}

void imprimirDespedida(int estado) {
    printf("Terminó la sesión con estado %d", estado);

}

