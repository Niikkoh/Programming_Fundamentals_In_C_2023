#include "simetria_lib.h"


int ehSimetrica(int matriz [N][N])
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0+i; j < N; j++)
            if(matriz[i][j] != matriz[j][i])
                return 0;
    }
    return 1;
}


