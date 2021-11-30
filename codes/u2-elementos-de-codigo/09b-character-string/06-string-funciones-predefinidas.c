#include <stdio.h>
#include <string.h>
int main()
{
    char cad1[20], cad2[20], cad3[20];

    strcpy(cad1, "Programacion ");
    printf("cad1: %s\n", cad1);
    strcpy(cad2, "en Casa");
    printf("cad2: %s\n", cad2);
    strncat(cad1, cad2, 4);
    printf("cad1: %s\n",cad1);

    printf("ingrese palabra 1: "); gets(cad2);
    printf("ingrese palabra 2: "); gets(cad3);
    if (strcmp(cad2, cad3)==0) {
        printf("Las palabras %s y %s son iguales\n",cad2, cad3);
        printf("La longitud de la palabra es %d", strlen(cad2));
    }
    else {
        printf("Las palabras %s y %s son distintas\n",cad2, cad3);
        printf("La longitud de la primera palabra es %d\n", strlen(cad2));
        printf("La longitud de la segunda palabra es %d\n", strlen(cad3));
    }
    return 0;
}
