#include <stdlib.h>

#include "vektor.h"

/*=========================*/

#define VAL_ALEATORIO_MAX 10

/*=========================*/

int* geraVetorAleatorio (int tamanho)
{
    int *vetor, i;

    vetor = (int*) malloc(sizeof(int) * tamanho);

    for(i = 0; i < tamanho; i++)
        vetor[i] = rand()%(VAL_ALEATORIO_MAX + 1);

    return vetor;
}

int* multiplicaVetor (int* vetorA, int tamanhoVetorA, int* vetorB, int tamanhoVetorB, int* tamVetorResultado)
{
    int *vetorResultado,
         i, maiorTamanho;

    if(tamanhoVetorA >= tamanhoVetorB)
        maiorTamanho = tamanhoVetorA;
    else
        maiorTamanho = tamanhoVetorB;

    vetorResultado = (int*) malloc(sizeof(int) * maiorTamanho);
    *tamVetorResultado = maiorTamanho;

    for(i = 0; i < maiorTamanho; i++)
    {
        if(i < tamanhoVetorA)
            vetorResultado [i] = vetorA[i];
        else
            vetorResultado [i] = 1;

        if(i < tamanhoVetorB)
            vetorResultado [i] *= vetorB[i];
    }

    return vetorResultado;
}
