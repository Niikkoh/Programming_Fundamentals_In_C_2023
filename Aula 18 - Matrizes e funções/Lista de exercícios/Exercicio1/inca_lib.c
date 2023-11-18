#include <stdio.h>

#include "inca_lib.h"

/*================*/

void geraMatrizZerada(int matriz[][N])
{
    int i, j;

    for(i=0; i < N; i++)
        for(j=0; j < N; j++)
            matriz[i][j] = 0;

}

void geraMatrizInca(int matriz[][N])
{
    int i = 0, j = 0, contador = 2,
        limite_max = N * N;

    geraMatrizZerada(matriz);
    matriz[i][j] = 1;

    while(contador <= limite_max)
    {
        while(j+1 < N && matriz[i][j+1] == 0)
        {
            j++;
            matriz[i][j] = contador;
            contador++;
        }
        while(i+1 < N && matriz[i+1][j] == 0)
        {
            i++;
            matriz[i][j] = contador;
            contador++;
        }
        while(j-1 >= 0 && matriz[i][j-1] == 0)
        {
            j--;
            matriz[i][j] = contador;
            contador++;
        }
        while(i-1 >= 0 && matriz[i-1][j] == 0)
        {
            i--;
            matriz[i][j] = contador;
            contador++;
        }
    }
}

void mostraMatriz (int matriz[][N])
{
    int i, j;

    for(i=0; i < N; i++)
    {
        for(j=0; j < N; j++)
            printf("%.2d ", matriz[i][j]);
        printf("\n");
    }
}
