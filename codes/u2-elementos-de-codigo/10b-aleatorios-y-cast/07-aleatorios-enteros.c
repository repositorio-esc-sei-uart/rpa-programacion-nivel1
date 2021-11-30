#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x; float y;
    srand(time(0));

    x = rand()%100;
    printf("Aleatorio entre 0 y 99: %d \n", x);
    x = 1+rand()%100;
    printf("Aleatorio entre 1 y 100: %d \n", x);
    x = 5+rand()%46; // x = 5 + rand()%(50 - 5 + 1)
    printf("Aleatorio entre 5 y 50: %d \n", x);
    y = (rand()%100)/100.0;
    printf("Aleatorio entre 0.0 y 1.0: %f \n", y);
}
