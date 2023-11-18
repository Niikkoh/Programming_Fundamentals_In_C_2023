#include <stdio.h>

/*==================*/

#define N 100
#define PARTES_SEPARADAS 2

/*==================*/

int main()
{
    unsigned int vetor[N], tamN, i, contador = 0,
                 tamTerritorio = 0;

    scanf("%du", &tamN);

    for(i = 0; i < tamN; i++)
    {
        scanf("%du", &vetor[i]);
        tamTerritorio += vetor[i];
    }

    tamTerritorio /= PARTES_SEPARADAS;

    i = 0;
    while(contador < tamTerritorio)
    {
        contador += vetor[i];
        i++;
    }

    printf("\n%d", i);

    return 0;
}
