#include <stdio.h>

/*===================*/

#define N_LINHAS 4
#define N_COLUNAS 1

#define QUANTIDADE_MINHOCAS {{100}, {110}, {0}, {100}}

/*===================*/

int main()
{
    int campo[N_LINHAS][N_COLUNAS] = QUANTIDADE_MINHOCAS,
        totalMinhocas, maiorTotalMinhocas = 0,
        i, j;

    for(i = 0; i < N_LINHAS; i++)
    {
        totalMinhocas = 0;
        for(j = 0; j < N_COLUNAS; j++)
            totalMinhocas += campo[i][j];

        if(totalMinhocas > maiorTotalMinhocas)
            maiorTotalMinhocas = totalMinhocas;
    }

    for(i = 0; i < N_COLUNAS; i++)
    {
        totalMinhocas = 0;
        for(j = 0; j < N_LINHAS; j++)
            totalMinhocas += campo[j][i];

        if(totalMinhocas > maiorTotalMinhocas)
            maiorTotalMinhocas = totalMinhocas;
    }

    printf("%d", maiorTotalMinhocas);

    return 0;
}

