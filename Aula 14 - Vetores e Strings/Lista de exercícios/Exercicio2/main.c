#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "vektor.h"

/*===========================*/

#define MAX_N 10
#define TAM_MIN 1

/*===========================*/

int main()
{
    srand(time(NULL));

    int posicao, v[MAX_N],
        tamVetor = rand()%MAX_N;

    geraConteudoVetor(v, tamVetor);

    printaConteudoVetor(v, tamVetor);
    scanf("%d", &posicao);
    while(tamVetor > TAM_MIN && (posicao <= tamVetor && posicao >= 0))
    {
        removeConteudoIndice(v, tamVetor, posicao);
        tamVetor --;
        printaConteudoVetor(v, tamVetor);

        scanf("%d", &posicao);
    }

    return 0;
}
