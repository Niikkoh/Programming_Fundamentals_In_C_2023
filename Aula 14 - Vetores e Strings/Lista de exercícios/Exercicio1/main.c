#include <stdio.h>

#include "gabarito.h"

/*========================*/

#define N 10
#define GABARITO "ABCDEABCDE"
#define PROVA "BCDEABCDEA"

/*========================*/

int main()
{
    char gabarito[N] = GABARITO;
    char prova[N] = PROVA;

    printf("%u", resultadoProva(gabarito, prova, N));

    return 0;
}
