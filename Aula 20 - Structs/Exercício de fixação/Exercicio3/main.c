#include <stdio.h>

#include "horario.h"

/*=====================*/

int main()
{
    Horario h1, h2;

    h1.hora = HORA_A;
    h1.minuto = MINUTO_A;
    h1.segundo = SEGUNDO_A;

    h2.hora = HORA_B;
    h2.minuto = MINUTO_B;
    h2.segundo = SEGUNDO_B;

    printf("%d", segundosEntre(h1, h2));

    return 0;
}
