#include <stdio.h>

#include "horario.h"

/*================*/

int segundosEntre (Horario h1, Horario h2)
{
    int segundosA = converteTempoSegundos(h1),
        segundosB = converteTempoSegundos(h2);

    if(segundosA > segundosB)
        segundosB += SEGUNDOS_DE_UM_DIA;

    return segundosB - segundosA;
}

int converteTempoSegundos (Horario h)
{
    int segundos;

    segundos = h.hora;

    segundos *= CASA_SEXADECIMAL;
    segundos += h.minuto;

    segundos *= CASA_SEXADECIMAL;
    segundos += h.segundo;

    return segundos;
}
