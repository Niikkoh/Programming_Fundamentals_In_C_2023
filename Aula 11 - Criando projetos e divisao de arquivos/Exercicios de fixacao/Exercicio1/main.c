#include <stdio.h>

#include "add_math.h"

/*===============================================================*/

#define N_TERMOS 10

/*===============================================================*/
int main()
{
    int n_encontrados = 0;
    int n = 2;

    while (n_encontrados < N_TERMOS)
    {
        if (ehPrimo (n))
        {
            printf ("%d\n", n);
            n_encontrados++;
        }
        n++;
    }

    return 0;
}
