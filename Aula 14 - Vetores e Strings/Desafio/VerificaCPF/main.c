#include <stdio.h>

#include "cpf_lib.h"

/*=================================*/

#define CODIGO_CPF {0, 9, 5, 5, 3, 2, 2, 8, 9, 8, 4}
#define TAM_CPF 11

/*=================================*/

int main()
{
    int cpf[TAM_CPF] = CODIGO_CPF;

    printf("%d", verificaCPF(cpf));

    return 0;
}
