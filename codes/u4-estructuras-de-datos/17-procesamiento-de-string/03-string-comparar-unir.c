#include <stdio.h>
#include <string.h>
#define MAXCAD 30
#define MAXDOBLE 60

void cargar(char s[MAXCAD]);
void comparar(char s1[MAXCAD], char s2[MAXCAD]);
void unir(char s1[MAXCAD], char s2[MAXCAD], char salida[MAXDOBLE]);

int main()
{   char cad1[MAXCAD], cad2[MAXCAD];
    char cad3[MAXDOBLE];
    cargar(cad1);
    cargar(cad2);
    comparar(cad1, cad2);
    unir(cad1, cad2, cad3);
    printf("\nLa cadena final es: %s \n", cad3);
}
void comparar(char s1[MAXCAD], char s2[MAXCAD])
{   if (strcmp(s1, s2)==0) {
        printf("Las palabras %s y %s son iguales\n",s1, s2);
        printf("La longitud de la palabra es %d", strlen(s1));
    } else {
        printf("Las palabras %s y %s son distintas\n",s1, s2);
        printf("La longitud de la primera palabra es %d\n", strlen(s1));
        printf("La longitud de la segunda palabra es %d\n", strlen(s2));
    }
}
void unir(char s1[MAXCAD], char s2[MAXCAD], char salida[MAXDOBLE])
{   strcpy(salida, s1);
    strcat(salida, " ");
    strcat(salida, s2);
}
void cargar(char s[MAXCAD])
{   printf("ingrese una palabra: ");
    gets(s);
    printf("\n");
}
