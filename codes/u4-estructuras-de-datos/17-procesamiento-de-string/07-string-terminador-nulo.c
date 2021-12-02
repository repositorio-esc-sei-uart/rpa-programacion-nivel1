#include <stdio.h>
main()
{
    char sinnulo[]={'S','I','N', ' ', 'N', 'U', 'L', 'O'};
    char connulo[]={'C','O','N', ' ', 'N', 'U', 'L', 'O', '\0'};

    // observe las salidas para identificar el uso del terminador nulo '\0'
    printf("%s\n", sinnulo);
    printf("%s\n", connulo);
}
