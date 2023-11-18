#include <string.h>

#include "risoslib.h"

/*===========================*/

unsigned int seRizadaEngracada (char *rizada)
{
    int contadorA = 0, contadorB = strlen(rizada) - 1;

    while(contadorA <= contadorB)
    {
        while(rizada[contadorA] != 'a' && rizada[contadorA] != 'e' && rizada[contadorA] != 'i'
              && rizada[contadorA] != 'o' && rizada[contadorA] != 'u' && contadorA != contadorB)
                contadorA++;
        while(rizada[contadorB] != 'a' && rizada[contadorB] != 'e' && rizada[contadorB] != 'i'
              && rizada[contadorB] != 'o' && rizada[contadorB] != 'u' && contadorA != contadorB)
                contadorB--;
        if(rizada[contadorA] != rizada[contadorB])
            return 0;

        contadorA++, contadorB--;
    }
    return 1;
}
