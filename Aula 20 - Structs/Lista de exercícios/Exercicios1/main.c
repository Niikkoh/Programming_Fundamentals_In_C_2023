#include <stdio.h>

#include "ordene.h"

/*==================*/

int main()
{
    MaMeMe resultado;

    resultado.maior = A;
    resultado.menor = B;
    resultado.meio = C;

    classifica2(&resultado);

    printf("%d \n%d \n%d",
           resultado.menor, resultado.meio, resultado.maior);

    return 0;
}
