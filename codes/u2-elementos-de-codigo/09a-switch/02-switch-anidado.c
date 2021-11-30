#include <stdio.h>
int main()
{
    switch (variable1)
    {
        case opcion_1:
            switch (variable2)
            {
                case opcion_1:
                    /** Bloque de instrucciones **/
                    break;
                case opcion_2:
                    /** Bloque de instrucciones **/
                    break;
                default:
                    /** Bloque de instrucciones **/
            }
            break;
        case opcion_2:
            /** anidamientos **/
            break;
        case opcion_3:
            /** más anidamientos **/
            break;
        default:        // de otro modo
            /** más anidamientos **/
    }

}
