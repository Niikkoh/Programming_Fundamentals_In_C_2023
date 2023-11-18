#include <stdio.h>

#include "sapos_insanos.h"

void saposNaPedra (unsigned short *caminhoPedra, unsigned int quantidadeSapos, unsigned int quantidadePedra)
{
    int i, j, posicaoInicialSapo, tamPuloSapo;

    for(i = 0; i < quantidadePedra; i++)
        caminhoPedra[i] = 0;

    for(i = 0; i < quantidadeSapos; i++)
    {
        scanf("%d %d", &posicaoInicialSapo, &tamPuloSapo);

        posicaoInicialSapo %= tamPuloSapo;

        for(j = posicaoInicialSapo; j < quantidadePedra; j+=tamPuloSapo)
            caminhoPedra[j] = 1;
    }
}
