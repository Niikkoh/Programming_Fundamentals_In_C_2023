#include <stdio.h>

#include "atapi.h"

/*======================*/


/*Gera uma matriz adjacente com um parâmetro de voo*/

void geraMatrizAdjacencia (int voos [][2], int matrizAdjacencia[][N_AEROPORTOS])
{
    int i,j;

    for(i=0; i < N_AEROPORTOS; i++)
        for(j=0; j < N_AEROPORTOS; j++)
            matrizAdjacencia[i][j] = 0;

    for(i=0; i < N_VOOS; i++)
    {
        matrizAdjacencia[voos[i][0]][voos[i][1]] = 1;
        matrizAdjacencia[voos[i][1]][voos[i][0]] = 1;
    }
}

/*Gera uma matriz de voo com um parâmeteo de adjacente*/

void geraMatrizVoo (int matrizAdjacencia[][N_AEROPORTOS], int voos [][2])
{
    int i, j, contador = 0;

    for(i=0; i < N_AEROPORTOS; i++)
        for(j=i; j < N_AEROPORTOS; j++)
            if(matrizAdjacencia[i][j] && contador < N_VOOS)
            {
                voos[contador][0] = i;
                voos[contador][1] = j;
                contador++;
            }
}

/*Calcula qual aeroporto tem mais conexoes*/

int aeroportoMaiorConexoes(int matrizAdjacencia[][N_AEROPORTOS])
{
    int contador, maiorNumero = 0, identificador,
        i, j;

    for(i = 0; i < N_AEROPORTOS; i++)
    {
        contador = 0;
        for(j = 0; j < N_AEROPORTOS; j++)
            if(matrizAdjacencia[i][j])
                contador++;

        if(contador > maiorNumero)
        {
            identificador = i;
            maiorNumero = contador;
        }
    }

    return identificador;
}

/*Calcula quantas conexões são necessárias para 2 aeroportos*/

int calculaConexoes(int matrizAdjacencia[][N_AEROPORTOS], int conexao1, int conexao2)
{
    int auxiliar [N_AEROPORTOS][N_AEROPORTOS],
        n = 0, i, j;

    for(i=0; i < N_AEROPORTOS; i++)
        for(j=0; j < N_AEROPORTOS; j++)
            auxiliar [i][j] = matrizAdjacencia [i][j];

    while(!auxiliar[conexao1][conexao2])
    {
        adjacenciaAoQuadrado(auxiliar);
        n++;
    }

    return n;
}

/*Verifica duas conexões próximas*/

void adjacenciaAoQuadrado (int matrizAdjacencia[][N_AEROPORTOS])
{
    int auxiliar [N_AEROPORTOS][N_AEROPORTOS], i, j, k;

    for(i = 0; i < N_AEROPORTOS; i++)
        for(j = 0; j < N_AEROPORTOS; j++)
        {
            auxiliar[i][j] = 0;
            for(k = 0; k < N_AEROPORTOS; k++)
                auxiliar[i][j] += matrizAdjacencia[i][k] * matrizAdjacencia[k][j];
        }

    for(i = 0; i < N_AEROPORTOS; i++)
        for(j = 0; j < N_AEROPORTOS; j++)
            if(!matrizAdjacencia[i][j] && auxiliar[i][j])
                matrizAdjacencia[i][j] = 1;

}

/*Printa uma matriz adjacente*/

void printMatrizAdjacencia (int matrizAdjacencia[][N_AEROPORTOS], int linha, int coluna)
{
    int i, j;

    for(i=0; i < linha; i++)
    {
        for(j=0; j < coluna; j++)
            printf("%d ", matrizAdjacencia[i][j]);
        printf("\n");
    }

}

/*Printa uma matriz de voo*/

void printMatrizVoo (int voos [][2], int linha, int coluna)
{
    int i, j;

    for(i=0; i < linha; i++)
    {
        for(j=0; j < coluna; j++)
            printf("%d ", voos[i][j]);
        printf("\n");
    }
}
