#include <stdio.h>

#include "simetria_lib.h"

/*========================*/


int main ()
{
    int i, j;
    int matriz [N][N];

    /* Lê */
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            printf ("Elemento em (%d, %d): ", i, j);
            scanf ("%d", &(matriz [i][j]));
        }

    if (ehSimetrica(matriz))
        printf ("Simetrica!\n");
    else
        printf ("Nao eh simetrica!\n");

    return (0);
}
