#include <stdio.h>
int main()
{
    int n, i;
    i = 0;

    printf("i: %d\n", i);  // 0
    i++;  // i = i + 1
    printf("i++: %d\n", i);  // 1

    i += 2;  // i = i + 2
    printf("i+=2: %d\n", i);  // 3


    printf("Ingrese un entero a incrementar: ");
    scanf("%d", &n); //4
    i += n;
    printf("i+=%d: %d\n", n, i);

    i--;  // i = i - 1
    printf("i--: %d\n", i);

    printf("Ingrese un entero a decrementar: ");
    scanf("%d", &n);
    i -= n;  // i = i - n
    printf("i-=%d: %d\n", n, i);

    printf("Ingrese un factor: ");
    scanf("%d", &n);
    i *= n;  // i = i * n
    printf("i*=%d: %d\n", n, i);


    printf("Ingrese un divisor: ");
    scanf("%d", &n);
    i /= n;  // i = i / n, n<>0
    printf("i/=%d: %d\n", n, i);

    // decremento/incremento prefijos y sufijos
    printf("++i: %d\n", ++i);
    printf("--i: %d\n", --i);
    printf("i++: %d\n", i++);
    printf("i--: %d\n", i--);
    printf("i: %d\n", i);

}
