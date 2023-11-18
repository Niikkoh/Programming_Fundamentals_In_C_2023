#include <stdio.h>

#include "palidrox.h"

/*===========================================*/

#define N 32123

int main()
{

    if(eh_palindrono(N))
        printf("eh palindrono");
    else
        printf("nao eh palindrono");

    return 0;
}
