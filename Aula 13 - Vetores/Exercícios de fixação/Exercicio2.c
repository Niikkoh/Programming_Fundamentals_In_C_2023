#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*=================================*/

#define TAM_VETOR 10

/*=================================*/

int main()
{
    srand(time(NULL));

    unsigned int vetor[TAM_VETOR],
                 i;

    for(i = 0; i < TAM_VETOR; i++)
    {
        vetor[i] = rand()%10;

        if(vetor[i] == i)
            printf("%d\n", vetor[i]);
    }


    return 0;
}
