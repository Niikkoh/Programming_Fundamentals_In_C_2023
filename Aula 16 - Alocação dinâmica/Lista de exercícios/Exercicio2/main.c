#include <stdio.h>
#include <stdlib.h>

#include "text.h"

/*==============*/

#define TEXTO_1 "sla mano"
#define TEXTO_2 "mto estranho"

#define TAM_TEXTO 15

int main()
{
    char s1[TAM_TEXTO] = TEXTO_1,
         s2[TAM_TEXTO] = TEXTO_2,
         *resultadoS;

    resultadoS = concatenaStrings(s1, s2);

    printf("%s", resultadoS);

    free(resultadoS);
    return 0;
}
