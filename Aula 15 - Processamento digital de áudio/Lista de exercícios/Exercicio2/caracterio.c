#include "caracterio.h"

/*============================*/

unsigned int quantidadeLetraTexto(char *texto)
{
    int i, contador = 0;

    for(i = 0; texto[i] != '\0'; i++)
        if((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z'))
           contador++;

    return contador;
}
