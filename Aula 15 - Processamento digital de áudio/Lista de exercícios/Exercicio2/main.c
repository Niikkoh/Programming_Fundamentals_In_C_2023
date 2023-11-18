#include <stdio.h>

#include "caracterio.h"

/*=========================*/

#define TEXTO "Ola tudo bom?"
#define TAM_TEXTO 30

int main()
{
    char texto[TAM_TEXTO] = TEXTO;
    unsigned int numeroLetraTexto;

    numeroLetraTexto = quantidadeLetraTexto(texto);

    printf("%u", numeroLetraTexto);

    return 0;
}
