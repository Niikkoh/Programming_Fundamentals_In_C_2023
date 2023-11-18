#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*====================*/

#define LINHA 2
#define COLUNA 3
#define MAX_ALEATORIO 20

/*====================*/

int main()
{
    srand(time(NULL));

    int matriz[LINHA][COLUNA], matrizTransposta[COLUNA][LINHA],
        i, j;

    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = (rand()%MAX_ALEATORIO) + 1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i = 0; i < LINHA; i++)
        for(j = 0; j < COLUNA; j++)
            matrizTransposta[j][i] = matriz[i][j];

    for(i = 0; i < COLUNA; i++)
    {
        for(j = 0; j < LINHA; j++)
            printf("%d ", matrizTransposta[i][j]);
        printf("\n");
    }

    return 0;
}
