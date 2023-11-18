#include <stdio.h>

#include "primo_lib.h"

/*=======================*/

#define VALOR_VERDADE 1
#define VALOR_FALSO 0

int* crivoDeEratostenes (int tamanho)
{
    int *crivo, i,j;

    crivo = (int*) malloc(sizeof(int) * tamanho);

    for(i=0; i < tamanho; i++)
        crivo[i] = VALOR_VERDADE;

    for(i=2; i < tamanho; i++)
    {
        if(crivo[i])
        {
            for(j=i+i; j < tamanho; j+=i)
                crivo[j] = VALOR_FALSO;
        }
    }

    return crivo;
}
