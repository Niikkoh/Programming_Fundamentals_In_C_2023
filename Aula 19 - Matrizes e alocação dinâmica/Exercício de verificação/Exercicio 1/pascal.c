#include <stdio.h>
#include <stdlib.h>

#include "pascal.h"

/*=============================*/

int** alocaMatriz (int linha, int coluna)
{
    int **matriz,
        i;

    matriz = (int**) malloc(sizeof(int *) * linha);
    for(i=0; i < linha; i++)
        matriz[i] = (int*) malloc(sizeof(int) * coluna);

    return matriz;
}

void printaMatrizInt (int **matriz, int linha, int coluna)
{
    int i, j;

    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
            printf("%.2d ", matriz[i][j]);
        printf("\n");
    }
}

void freeMatrizInt (int **matriz, int linha)
{
    int i;

    for(i = 0; i < linha; i++)
        free(matriz[i]);
    free(matriz);
}

int** geraTrianguloDePascal (int grau)
{
    int **matriz,
        i, j;

    matriz = alocaMatriz(grau, grau);

    for(i = 0; i < grau; i++)
        for(j = 0; j < grau; j++)
        {
            if(i == j || !j)
                matriz[i][j] = 1;
            else if(i < j)
                matriz[i][j] = 0;
            else
                matriz[i][j] = matriz[i-1][j-1] + matriz[i-1][j];
        }

    return matriz;
}
