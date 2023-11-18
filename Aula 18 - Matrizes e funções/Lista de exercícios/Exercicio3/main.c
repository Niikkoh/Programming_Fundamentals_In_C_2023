#include <stdio.h>

#include "atapi.h"

/*=============*/

int main()
{

    int voos [N_VOOS][2], nConexoes = 0, i, j,
        matrizAdjacencia[N_AEROPORTOS][N_AEROPORTOS] = {{0, 0, 0, 1, 0, 0},
                                                        {0, 0, 0, 1, 0, 0},
                                                        {0, 0, 0, 1, 0, 0},
                                                        {1, 1, 1, 0, 1, 0},
                                                        {0, 0, 0, 1, 0, 1},
                                                        {0, 0, 0, 0, 1, 0}};

    char opcao;

    printf("Pesquise voos com opçoes: \n\nA) Sem conexoes:\nB) Exatamente N conexoes:\nC) Ate N conexoes:\n");
    scanf("%c", &opcao);

    if(opcao == 'a' || opcao == 'A')
    {
        for(i = 0; i < N_AEROPORTOS; i++)
            for(j = i; j < N_AEROPORTOS; j++)
                if(matrizAdjacencia[i][j])
                    printf("\nVoo %d - %d", i, j);
    }
    else if(opcao == 'b' || opcao == 'B')
    {
        printf("\nQuantas conexoes deseja pesquisar:\n");
        scanf("%d", &nConexoes);

        for(i = 0; i < N_AEROPORTOS; i++)
            for(j = i; j < N_AEROPORTOS; j++)
                if(calculaConexoes(matrizAdjacencia, i, j) == nConexoes)
                    printf("\nVoo %d - %d ", i, j);
    }
    else if(opcao == 'c' || opcao == 'C')
    {
        printf("\nQuantas conexoes deseja pesquisar:\n");
        scanf("%d", &nConexoes);

        for(i = 0; i < nConexoes; i++)
            adjacenciaAoQuadrado(matrizAdjacencia);

        for(i = 0; i < N_AEROPORTOS; i++)
            for(j = i; j < N_AEROPORTOS; j++)
                if(matrizAdjacencia[i][j])
                    printf("\nVoo %d - %d", i, j);
    }

    return 0;
}
