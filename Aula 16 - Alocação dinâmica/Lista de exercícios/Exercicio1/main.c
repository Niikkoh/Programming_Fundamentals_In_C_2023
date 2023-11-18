#include <stdio.h>
#include <stdlib.h>

#include "pack_string.h"

/*=============================*/

#define TAMANHO_TEXTO 1024

/*=============================*/

int main()
{
    char texto [TAMANHO_TEXTO],
         *textoEscrito;

    fgets (texto, TAMANHO_TEXTO, stdin);
    textoEscrito = empacotaString (texto);

    printf("\n%s", textoEscrito);

    free(textoEscrito);

    return 0;
}
