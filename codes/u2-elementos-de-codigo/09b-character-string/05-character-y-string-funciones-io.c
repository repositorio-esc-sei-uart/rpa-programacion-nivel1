#include <stdio.h>
int main() {
    char letra;  // un caracter
    char palabra[20];  // cadena de caracteres
    char frase[40];

    printf("Ingrese una letra: ");
    letra = getc(stdin);  // stdin lectura por teclado
    fflush(stdin);
    printf("Ingrese una palabra: ");
    gets(palabra);
    printf("Ingrese una frase: ");
    gets(frase);

    printf("\n[con putchar] La letra es: ");
    putchar(letra);  // escribe en pantalla un caracter
    printf("\n[con putc] La letra es: ");
    putc(letra, stdout);  // stdout es escribir en pantalla
    printf("\nLa palabra es: ");
    puts(palabra);  // escribre en pantalla una cadena de caracteres
    printf("[con puts] La frase es: ");
    puts(frase);
    printf("[con printf] La frase es: %s", frase);
}
