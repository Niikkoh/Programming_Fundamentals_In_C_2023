#include <stdio.h>

/*==========*/

#define LINHA 2
#define COLUNA 3
#define CONTEUDO_ELEMENTO {{1, 1, 1}, {1, 1, 1}}

/*==========*/

int main()
{
    int matriz[LINHA][COLUNA] = CONTEUDO_ELEMENTO,
        i, j, soma = 0;

    for (i=0; i < LINHA; i++)
    {
        for (j=0; j < COLUNA; j++)
            soma += matriz[i][j];
    }

    printf("%d", soma);

    return 0;
}
