#include "search.h"

/*============================*/

int buscaVetor (int* vetor, int n, int procurado)
{
    int i;

    for(i = 0; i < n; i++)
        if(vetor[i] == procurado)
            return i;
    return -1;
}
