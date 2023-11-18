#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "matrix_lib.h"

/*====================*/

#define ALEATORIO_MAX 100

/*====================*/

int main ()
{
    int i, j;
    int matriz [N_LINHAS][N_COLUNAS];

    srand (time (NULL));

    /* Preenche */
    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matriz [i][j] = rand () % ALEATORIO_MAX;

    /* Imprime */
    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
            printf ("%d\t", matriz [i][j]);
        printf ("\n");
    }

    /* Testa */
    if (temRepeticao (matriz))
        printf ("Tem elementos repetidos.");
    else
        printf ("Nao tem elementos repetidos.");

    return (0);
}

