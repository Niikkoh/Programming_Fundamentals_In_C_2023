#include "tempo_lib.h"

/*=================================*/

#define DIVISAO_SEXAGECIMAL 60

/*=================================*/
void segundosParaHMS (int total_segundos, int *h, int *m, int *s)
{
    //Separa os segundos do tempo total
    *s = total_segundos %  DIVISAO_SEXAGECIMAL;

    //Separando as horas do tempo real
    *m = total_segundos / DIVISAO_SEXAGECIMAL;
    *h = *m / DIVISAO_SEXAGECIMAL;

    //Separando os minutos
    *m = *m % DIVISAO_SEXAGECIMAL;
}
