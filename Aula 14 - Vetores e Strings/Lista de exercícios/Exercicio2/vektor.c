#include <stdio.h>
#include <stdlib.h>

#include "vektor.h"

/*===============================*/

#define LIMITE_ALEATORIO 100

/*===============================*/

void geraConteudoVetor(int *vetor, int n)
{
    for(int i = 0; i < n; i++)
        vetor[i] = rand()% LIMITE_ALEATORIO;
}

void removeConteudoIndice(int *vetor, int n, int posicao)
{
    for(int i = posicao; i < n-1; i++)
        vetor[i] = vetor[i+1];
}

void printaConteudoVetor(int *vetor, int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
