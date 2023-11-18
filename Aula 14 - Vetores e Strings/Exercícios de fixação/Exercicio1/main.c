#include <stdio.h>
#include "search.h"

/*======================*/

#define N 5

/*======================*/

int main()
{
    int vetor[N] = {0, 2, 1, 5, 6};

    printf("%d", buscaVetor(vetor, N, 3));

    return 0;
}
