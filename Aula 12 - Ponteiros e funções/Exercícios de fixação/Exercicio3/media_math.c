#include <stdio.h>

#include "media_math.h"

/*==============================*/

float calculaMedia (unsigned int n, float *maiorValor, float *menorValor)
{
    float media, entradaN;
    int i;

    if(n <= 0)
        return 0;

    scanf("%f", &entradaN);

    media = entradaN;
    *maiorValor = entradaN;
    *menorValor = entradaN;
    for(i=1; i < n; i++)
    {
        scanf("%f", &entradaN);

        media += entradaN;

        if(*maiorValor < entradaN)
            *maiorValor = entradaN;
        else if(*menorValor > entradaN)
            *menorValor = entradaN;
    }

    media /= n;

    return media;
}
