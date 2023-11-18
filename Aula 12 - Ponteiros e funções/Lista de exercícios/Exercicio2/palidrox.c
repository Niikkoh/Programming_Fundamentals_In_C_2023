#include "palidrox.h"

/*====================================*/

unsigned short eh_palindrono(int n)
{
    int pri, ult;

    while(n != 0)
    {
        removeExtremos (&n, &pri, &ult);

        if(pri != ult)
            return 0;
    }
    return 1;
}

void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;
    tn = *n;

    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }

    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

