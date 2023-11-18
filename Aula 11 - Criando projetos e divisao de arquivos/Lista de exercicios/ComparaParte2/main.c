#include <stdio.h>

#include "compara.h"

/*===========================================================*/

int main()
{
    unsigned int valorA, valorB;

    scanf("%du", &valorA);
    scanf("%du", &valorB);

    printf("%hu", eh_segmento_do_outro(valorA, valorB));
    return 0;
}
