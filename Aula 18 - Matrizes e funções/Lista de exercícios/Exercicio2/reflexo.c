#include <stdio.h>

#include "reflexo.h"

/*=====================*/

void imprimeComReflexo (char matriz[][TAMANHO_COLUNA], int linha, int coluna)
{
    int i, j;

    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna-1; j++)
            printf("%c", matriz[i][j]);

        for(j = coluna-2; j >= 0; j--)
            printf("%c", matriz[i][j]);
        printf("\n");
    }

    for(i = linha-1; i >= 0; i--)
    {
        for(j = 0; j < coluna-1; j++)
            printf("%c", matriz[i][j]);
        for(j = coluna-2; j >= 0; j--)
            printf("%c", matriz[i][j]);
        printf("\n");
    }
}
