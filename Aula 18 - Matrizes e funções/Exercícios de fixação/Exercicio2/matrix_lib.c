#include <stdio.h>

#include "matrix_lib.h"

/*======================*/

int temRepeticao (int matriz[N_LINHAS][N_COLUNAS])
{
    int i,j,k,l;

    for(i=0; i < N_LINHAS; i++)
    {
        for(j=0; j < N_COLUNAS; j++)
        {
            /*Verificando a primeira linha*/
            for(k = j+1; k < N_COLUNAS; k++)
                if(matriz[i][j] == matriz[i][k])
                    return 1;

            /*Verificando as linhas restantes*/
            for(k = i+1; k < N_LINHAS; k++)
                for(l=0; l < N_COLUNAS; l++)
                    if(matriz[i][j] == matriz[k][l])
                        return 1;

        }
    }
    return 0;
}
