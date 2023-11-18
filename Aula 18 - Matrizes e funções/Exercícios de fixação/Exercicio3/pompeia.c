#include "pompeia.h"

int eh_livre (char manuscrito[N_LINHAS][N_COLUNAS])
{
    int i, j;

    for(i = 0; i < N_LINHAS; i++)
        for(j = 0; j < N_COLUNAS-1; j++)
            if(manuscrito[i][j] != manuscrito[N_LINHAS - i - 1][N_COLUNAS - j - 2])
                return 0;

    for(i = 0; i < N_LINHAS; i++)
        for(j = 0; j < N_COLUNAS-1; j++)
            if(manuscrito[i][j] != manuscrito[j][i])
                return 0;

    return 1;
}
