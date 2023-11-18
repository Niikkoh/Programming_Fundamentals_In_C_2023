#include "compara.h"

/*==========================================================================*/

#define SEPARA_UNIDADE 10

#define ASEGB 1
#define BSEGA 2

/*==========================================================================*/

unsigned short int compara_ultimos_digitos(unsigned int a, unsigned int b)
{

    while(b % SEPARA_UNIDADE != 0)
    {
        if(a % SEPARA_UNIDADE != b % SEPARA_UNIDADE)
            return 0;
        b /= SEPARA_UNIDADE;
        a /= SEPARA_UNIDADE;
    }

    return 1;
}

unsigned short int eh_segmento_do_outro (unsigned int a, unsigned int b)
{
    if (a >= b)
    {
        while(a >= b)
        {
            if(compara_ultimos_digitos(a,b))
                return BSEGA;
            a /= SEPARA_UNIDADE;
        }
        return 0;
    }
    else
    {
        while(b >= a)
        {
            if(compara_ultimos_digitos(b,a))
                return ASEGB;
            b /= SEPARA_UNIDADE;
        }
        return 0;
    }
}
