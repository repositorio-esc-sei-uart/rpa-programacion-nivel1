// Directivas del preprocesador
#include <stdio.h>
//Forma 1: con directiva del preprocesador
#define CONSTANTE_SIMBOLICA 2020

int main()
{
    // Forma 2: como variable con valor inalterable
    const int CONSTANTE_VALOR_FIJO = 5;

    // CONSTANTE_VALOR_FIJO = 10;  error

    printf("%d",CONSTANTE_VALOR_FIJO);
    //...
    // ¿Que sucede si intentamos modificar el valor
    // de las constantes?
}

