#include <stdio.h>
#include <stdlib.h>

#include "costura.h"

/*======================================================================================*/

#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */

/*======================================================================================*/


int main ()
{
    int i, j, k = 0;

    /* Funciona até desligar ou o tecido acabar. */
    while (1)
    {
        for (i = 1; i <= LARGURA_FAIXA; i++)
        {
            for (j = i; j < LARGURA_FAIXA; j++)
                moveAgulha();
            for (j = LARGURA_FAIXA - i; j < LARGURA_FAIXA; j++)
                if(k % 2 == 0)
                    pontoRolo2();
                else
                    pontoRolo1();
            rolaTecido();
        }
        k++;
    }

    return 0;
}
