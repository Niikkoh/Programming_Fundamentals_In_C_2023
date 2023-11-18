#include <stdio.h>

#include "hiper_vektor.h"

/*======================*/

#define TAM_VETOR 14
#define CONTEUDO_VETOR {0, 1, 2, 3, 4, 3, 2, 4, 5, 3, 2, 6, 1, 0}

int main()
{
    int vetorOriginal[TAM_VETOR] = CONTEUDO_VETOR,
        vetorAtualizado[TAM_VETOR], tamanho, i;

    tamanho = naoRepeteValor(vetorOriginal, vetorAtualizado, TAM_VETOR);

    for(i = 0; i < tamanho; i++)
        printf("%d ", vetorAtualizado[i]);

    return 0;
}
