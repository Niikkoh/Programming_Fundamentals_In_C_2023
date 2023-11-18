#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "dados_lib.h"

/*======================*/

#define LADOS_DADO 6

#define MIN_PERMITIDO 10
#define MAX_PERMITIDO 30

/*======================*/

int* geraValoresDado (int n)
{
    int* rolagens, i;

    rolagens = (int*) malloc (sizeof(int) * n);

    for(i = 0; i < n; i++)
        rolagens[i] = (rand() % LADOS_DADO) + 1;

    return rolagens;
}

int** geraMatriz (int largura, int altura)
{
    int **matriz, i;

    matriz = (int**) malloc (sizeof(int*) * altura);

    for(i = 0; i < altura; i++)
        matriz[i] = (int*) malloc (sizeof(int *) * largura);

    return matriz;
}

int*** geraCaixaDados (int largura, int altura, int n)
{
    int*** caixa, i, j;

    caixa = (int***) malloc(sizeof (int**) * altura);

    for(i = 0; i < altura; i++)
    {
        caixa[i] = (int**) malloc(sizeof (int*) * largura);
        for(j = 0; j < largura; j++)
            caixa[i][j] = geraValoresDado(n);
    }
    return caixa;
}

void printaValoresDado (int* rolagens, int n)
{
    int i;

    for(i=0; i < n; i++)
        printf("%d\n", rolagens[i]);
}

void printaDadosAprovados (int** dadosAprovados, int largura, int altura)
{
    int i, j;

    for(i=0; i < altura; i++)
    {
        for(j=0; j < largura; j++)
            printf("%d ", dadosAprovados[i][j]);
        printf("\n");
    }
}

int analisa (int*** in, int largura, int altura, int** out)
{
    int i, j,
        contador;

    for(i=0; i < altura; i++)
        for(j=0; j < largura; j++)
            out[i][j] = avaliaDado(in[i][j], ROLAGENS);

    for(i=0; i < altura; i++)
    {
        contador = 0;
        for(j=0; j < largura; j++)
            contador += out[i][j];

        if(contador <= largura / 2)
            return 0;
    }

    for(i=0; i < largura; i++)
    {
        contador = 0;
        for(j=0; j < altura; j++)
            contador += out[j][i];

        if(contador <= largura / 2)
            return 0;
    }

    return 1;
}

int avaliaDado (int* rolagens, int n)
{
    int i,j, contador;

    for(i=1; i <= LADOS_DADO; i++)
    {
        contador = 0;
        for(j=0; j < n; j++)
            if(rolagens[j] == i)
                contador++;

        if(contador < MIN_PERMITIDO || contador > MAX_PERMITIDO)
            return 0;
    }
    return 1;
}

void freeMatriz (int **matriz, int altura)
{
    int i;

    for(i = 0; i < altura; i++)
        free(matriz[i]);
    free(matriz);
}

void freeCaixaDados (int ***caixaDados, int largura, int altura)
{
    int i, j;

    for(i = 0; i < altura; i++)
        for(j = 0; i < largura; i++)
            free(caixaDados[i][j]);

    for(i = 0; i < altura; i++)
        free(caixaDados[i]);

    free(caixaDados);
}
