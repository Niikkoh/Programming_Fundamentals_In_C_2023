#include <stdio.h>
#include <stdlib.h>

#include "compara.h"

/*=======================================*/

int main()
{
    unsigned int valorA, valorB;

    scanf("%du", &valorA);
    scanf("%du", &valorB);

    printf("\n%hu", compara_ultimos_digitos(valorA, valorB));

    return 0;
}
