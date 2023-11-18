#include <stdio.h>

#include "inverte_string.h"

/*=====================*/

#define TEXTO "OLA LINDA"
#define TAM_TEXTO 20

/*=====================*/

int main()
{
    unsigned char texto[TAM_TEXTO] = TEXTO;

    inverte_texto(texto);

    printf("%s", texto);

    return 0;
}
