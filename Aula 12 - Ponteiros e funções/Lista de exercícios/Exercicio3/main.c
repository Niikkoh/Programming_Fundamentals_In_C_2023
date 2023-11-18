#include <stdio.h>

#include "k_lab.h"

/*===================================*/

#define N 9

int main()
{

    unsigned int k;
    unsigned short eh_alternante;

    eh_alternante = calcula_k_alternante(N, &k);

    if(eh_alternante)
        printf("A sequencia eh %hu-alternante", k);
    else
        printf("A sequencia nao eh alternante");
    return 0;
}
