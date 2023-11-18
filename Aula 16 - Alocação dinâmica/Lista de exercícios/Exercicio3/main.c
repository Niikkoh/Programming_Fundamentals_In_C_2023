#include <stdio.h>

#include "parentisu.h"

/*============================*/

#define TAM_VETOR 20
#define CONTEUDO_TEXTO "{[((()())()]}(()(()"

/*============================*/

int main()
{
    char texto[TAM_VETOR] = CONTEUDO_TEXTO;
    int parenteses[TAM_VETOR], i;

    balanceamentoDeParenteses(texto, parenteses);

    for(i = 0; i < TAM_VETOR; i++)
        printf("%c ", texto[i]);

    printf("\n");

    for(i = 0; i < TAM_VETOR-1; i++)
        printf("%d ", parenteses[i]);

    return 0;
}
