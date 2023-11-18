#include <stdio.h>

/*==================================*/

#define VALOR_N 3

/*==================================*/

int main()
{
    int *p, n = VALOR_N;

    p = &n;

    printf("O valor da variavel: %d", n);
    printf("\nO endereço da variavel: %p", &n);
    printf("\nO endereco apontado pelo ponteiro: %p", p);
    printf("\nO valor apontado pelo ponteiro: %d", *p);
    printf("\nO endereco do ponteiro: %p", &p);

    return 0;
}
