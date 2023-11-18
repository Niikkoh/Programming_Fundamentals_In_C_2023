#include <stdio.h>

#include "sapos_insanos.h"

/*=================*/

#define MAX_PEDRA 100

int main()
{
    unsigned short caminhoDePedra[MAX_PEDRA];

    unsigned int quantidadePedra, quantidadeSapo, i;

    scanf("%u %u", &quantidadePedra, &quantidadeSapo);

    saposNaPedra(caminhoDePedra, quantidadeSapo, quantidadePedra);

    for(i = 0; i < quantidadePedra; i++)
        printf("%hu", caminhoDePedra[i]);

    return 0;
}
