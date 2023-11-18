#include "labiritinte.h"

/*===================================*/

int caminhoVidaMaxima (int* labirinto, int tamanhoLabirinto)
{
    int maiorNumero = 0, contador = 0,
        i, j;

    for(i = 0; i < tamanhoLabirinto; i++)
    {
        contador = 0;
        for(j = i; j < tamanhoLabirinto; j++)
        {
            contador += labirinto[j];
            if(contador > maiorNumero)
                maiorNumero = contador;
        }
    }

    return maiorNumero;
}
