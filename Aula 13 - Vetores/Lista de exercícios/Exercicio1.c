#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*==========================*/

#define TAM_VETOR 30
#define MENOR_N 20
#define MAIOR_N 80

/*==========================*/

int arredondaNum (float n);

int main()
{
    srand(time(NULL));

    unsigned int vetor[TAM_VETOR],
                 i, media = 0;

    for(i = 0; i < TAM_VETOR; i++)
    {
        vetor[i] = rand() % (MAIOR_N - MENOR_N) + MENOR_N;
        media += vetor[i];
    }

    media = arredondaNum (media / (float) TAM_VETOR);
    printf("Media: %d\n\n", media);

    for(i = 0; i <  TAM_VETOR; i++)
    {
        printf("\n%d - ", vetor[i]);
        if(vetor[i] < media)
            printf("eh menor");
        else if(vetor[i] == media)
            printf("eh igual");
        else
            printf("eh maior");
    }

    return 0;
}

int arredondaNum (float n)
{
    if(n >= 0)
        return (int)(n + 0.5);
    else
        return (int)(n - 0.5);
}
