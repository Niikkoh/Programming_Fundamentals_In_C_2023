#include <stdio.h>

/*====================================*/

#define TAM_VETOR 10

/*====================================*/

int main()
{
    unsigned int v[TAM_VETOR],
                 i;

    for(i = 0; i < TAM_VETOR; i++)
    {
        v[i] = i;
        printf("%d\n", v[i]);
    }

    return 0;
}
