#include <stdio.h>

#include "Labiritinte.h"

/*==========================*/

#define TAM_MAX 1024

int main()
{
    int labirinto[TAM_MAX], tamLabirinto, i,
        vidaMaxima;

    scanf("%d", &tamLabirinto);

    for(i = 0; i < tamLabirinto; i++)
        scanf("%d", &labirinto[i]);

    vidaMaxima = caminhoVidaMaxima(labirinto, tamLabirinto);

    printf("\n%d", vidaMaxima);

    return 0;
}
