#include <stdio.h>

/*===============*/

#define TAMANHO_SUDOKU 9
#define TABELA_3X 3

/*===============*/

int main()
{
    int i, j, k, l, eh_sudoku = 1,
        sudoku[TAMANHO_SUDOKU][TAMANHO_SUDOKU] = {{9, 5, 4, 8, 1, 6, 3, 7, 2},
                                                  {7, 8, 6, 2, 5, 3, 1, 4, 9},
                                                  {1, 2, 3, 7, 9, 4, 6, 5, 8},
                                                  {3, 1, 8, 9, 7, 2, 4, 6, 5},
                                                  {2, 7, 9, 4, 6, 5, 8, 1, 3},
                                                  {4, 6, 5, 3, 8, 1, 9, 2, 7},
                                                  {8, 4, 7, 1, 2, 9, 5, 3, 6},
                                                  {5, 3, 2, 6, 4, 8, 7, 9, 1},
                                                  {6, 9, 1, 5, 3, 7, 2, 8, 4}};


    /*Verificando se as linhas do sudoku estão corretas*/

    for(i = 0; i < TAMANHO_SUDOKU && eh_sudoku; i++)
        for(j = 1; j <= TAMANHO_SUDOKU && eh_sudoku; j++)
        {
            eh_sudoku = 0;
            for(k = 0; k < TAMANHO_SUDOKU; k++)
            {
                if(sudoku[i][k] == j)
                {
                    eh_sudoku = 1;
                    break;
                }
            }
        }
    /*Verificando se as colunas do sudoku estão corretas*/

    for(i = 0; i < TAMANHO_SUDOKU && eh_sudoku; i++)
        for(j = 1; j <= TAMANHO_SUDOKU && eh_sudoku; j++)
        {
            eh_sudoku = 0;
            for(k = 0; k < TAMANHO_SUDOKU; k++)
            {
                if(sudoku[k][i] == j)
                {
                    eh_sudoku = 1;
                    break;
                }
            }
        }

    /*Verificando a tabela 3X3 do sudoku estão corretas*/

    for(i = 0; i < TAMANHO_SUDOKU && eh_sudoku; i+= TABELA_3X)
        for(j = 1; j <= TAMANHO_SUDOKU && eh_sudoku; j++)
        {
            eh_sudoku = 0;
            for(k = 0; k < TABELA_3X && !eh_sudoku; k++)
                for(l = 0; l < TABELA_3X; l++)
                {
                    if(sudoku[k+i][l+i] == j)
                        eh_sudoku = 1;
                }
        }

    if(eh_sudoku)
        printf("O tabuleiro esta resolvido.");
    else
        printf("O tabuleiro nao esta resolvido.");


    return 0;
}
