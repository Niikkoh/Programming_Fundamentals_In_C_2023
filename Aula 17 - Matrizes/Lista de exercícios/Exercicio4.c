#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*==================*/

#define M 2
#define N 3

#define LIMITE_ALEATORIO 3

/*==================*/

int main()
{
    srand(time(NULL));

    int matriz_1[M][N], matriz_2[N][M], matrizResultante[M][M],
        i, j, k;

    for(i=0; i < M; i++)
    {
        for(j=0; j < N; j++)
        {
            matriz_1[i][j] = (rand()% LIMITE_ALEATORIO) + 1;
            matriz_2[j][i] = (rand()% LIMITE_ALEATORIO) + 1;

            printf("%d ", matriz_1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0; i < N; i++)
    {
        for(j=0; j < M; j++)
            printf("%d ", matriz_2[i][j]);
        printf("\n");
    }

    printf("\n");

    for(i=0; i < M; i++)
    {
        for(j=0; j < M; j++)
        {
            matrizResultante[i][j] = 0;

            for(k=0; k < N; k++)
                matrizResultante[i][j] += matriz_1[i][k] * matriz_2[k][j];
            printf("%d ", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
