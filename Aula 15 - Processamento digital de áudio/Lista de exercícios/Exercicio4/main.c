#include <stdio.h>

#include "decrease_lib.h"

/*=======================*/

#define CONTEUDO_VETOR {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
#define TAM_VETOR 10

int main()
{
    int vetor[TAM_VETOR] = CONTEUDO_VETOR,
        tamSequencia, inicio, fim;

    tamSequencia = tamMaiorSeqNDec(vetor, TAM_VETOR, &inicio, &fim);

    printf("Maior Sequencia: %d \nPosicao inicial: %d \nPosicao final: %d", tamSequencia, inicio, fim);

    return 0;
}
