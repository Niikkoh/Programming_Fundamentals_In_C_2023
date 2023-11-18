#include <stdio.h>

/*=================================*/

#define TAM_VETOR 6

/*=================================*/

int main()
{
    unsigned int vetor[TAM_VETOR],
                 i;

    /*Insere os valores no vetor informados pelo usuario*/
    for(i = 0; i < TAM_VETOR; i++)
        scanf("%du", &vetor[i]);

    /*Imprime o vetor informado em ordem intercalada*/
    for(i = 0; i < TAM_VETOR; i+=2)
        printf("%d ", vetor[i]);
    for(i = 1; i < TAM_VETOR; i+=2)
        printf("%d ", vetor[i]);

    return 0;
}
