#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "animais_mov.h"

/*=============================================*/

#define DISTANCIA_CORRIDA 70
#define MAX_SORTEADO 10

int main()
{
    srand(time(NULL));

    int posLebre = 1, posTartaruga = 1;

    printf("Lebre: %.2d -|- Tartaruga: %.2d\n" , posLebre, posTartaruga);

    while(posLebre < DISTANCIA_CORRIDA && posTartaruga < DISTANCIA_CORRIDA)
    {
        moveLebre(rand() % MAX_SORTEADO+1, &posLebre);
        moveTartaruga(rand() % MAX_SORTEADO+1, &posTartaruga);

        printf("Lebre: %.2d -|- Tartaruga: %.2d\n" , posLebre, posTartaruga);
    }

    return 0;
}
