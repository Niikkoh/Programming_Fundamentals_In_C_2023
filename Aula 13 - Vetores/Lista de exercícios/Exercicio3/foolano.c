#include "foolano.h"

/*==============================*/

#define TOTAL_DIGITOS 9
#define SEPARA_UNIDADES 10

/*==============================*/

int ehParDeFoolano (unsigned int n1, unsigned int n2)
{

    int contadorDigitoN1, contadorDigitoN2,
        aux, i = 0;

    for(i = 0; i <= TOTAL_DIGITOS; i++)
    {
        contadorDigitoN1 = 0;
        contadorDigitoN2 = 0;

        aux = n1;

        while(aux != 0)
        {
            if(aux % SEPARA_UNIDADES == i)
                contadorDigitoN1++;
            aux /= SEPARA_UNIDADES;
        }

        aux = n2;

        while(aux != 0)
        {
            if(aux % SEPARA_UNIDADES == i)
                contadorDigitoN2++;
            aux /= SEPARA_UNIDADES;
        }

        if(contadorDigitoN1 != contadorDigitoN2)
            return 0;
    }

    return 1;
}
