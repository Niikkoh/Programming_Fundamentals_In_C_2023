#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "vektor.h"

/*=============================*/


int main()
{
    srand(time(NULL));

    int *vetorA, *vetorB, *vetorResultado,
        i, tamanhoVetorA, tamanhoVetorB, tamVetorResultado;

    scanf("%d %d", &tamanhoVetorA, &tamanhoVetorB);

    vetorA = geraVetorAleatorio(tamanhoVetorA);
    vetorB = geraVetorAleatorio(tamanhoVetorB);

    vetorResultado = multiplicaVetor(vetorA, tamanhoVetorA, vetorB, tamanhoVetorB, &tamVetorResultado);

    for(i = 0; i < tamVetorResultado; i++)
    {
        if(i < tamanhoVetorA)
            printf("%d ", vetorA[i]);
        else
            printf("  ");

        if(i < tamanhoVetorB)
            printf("%d ", vetorB[i]);
        else
            printf("  ");

        printf("%d\n", vetorResultado[i]);
    }

    free(vetorA);
    free(vetorB);
    free(vetorResultado);

    return 0;
}
