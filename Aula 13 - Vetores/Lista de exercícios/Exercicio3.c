#include <stdio.h>

/*=======================*/

#define TAM_VETOR 1024
#define N_VARIAVEIS 100

/*=======================*/

int main()
{
    unsigned int vetor[TAM_VETOR];

    int i;

    for(i = 0; i < N_VARIAVEIS; i++)
        vetor[i] = i;

    for(i = N_VARIAVEIS - 1; i >= 0; i--)
        printf("%d\n", vetor[i]);

    return 0;
}

