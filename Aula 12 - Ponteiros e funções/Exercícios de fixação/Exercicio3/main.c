#include <stdio.h>

#include "media_math.h"

/*==============================*/

#define N 10

/*==============================*/

int main()
{
    float media, maiorValor, menorValor;

    media = calculaMedia (N, &maiorValor, &menorValor);

    printf("\nMedia: %.2f, Maior valor: %.2f, Menor valor: %.2f", media, maiorValor, menorValor);

    return 0;
}
