#include <stdio.h>

#include "k_lab.h"

/*================================*/

#define VERIFICA_PAR 2

/*================================*/

unsigned short calcula_k_alternante (unsigned int n, unsigned int *k)
{
    int i, valorAtual, valorAnterior,
        guardaK = 1, contador = 1, troco_par = 0;

    if(n <= 0)
        return 0;

    scanf("%d", &valorAtual);
    for(i = 1; i < n; i++)
    {
        valorAnterior = valorAtual;
        scanf("%d", &valorAtual);

        if(valorAnterior % VERIFICA_PAR == valorAtual % VERIFICA_PAR)
            contador++;
        else
        {
            if(!troco_par)
            {
                troco_par = 1;
                guardaK = contador;
            }
            else if(contador != guardaK)
                return 0;
            contador = 1;
        }
    }


    if(contador == guardaK || !troco_par)
    {
        *k = contador;
        return 1;
    }
    return 0;
}
