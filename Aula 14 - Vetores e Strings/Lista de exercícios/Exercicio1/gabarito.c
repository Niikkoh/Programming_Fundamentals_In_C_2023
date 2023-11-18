#include "gabarito.h"

/*====================*/

unsigned int resultadoProva(char *gabarito, char *prova,  int n)
{
    int i, contador = 0;

    for(i = 0; i < n; i++)
        if(gabarito[i] == prova[i])
            contador++;

    return contador;
}
