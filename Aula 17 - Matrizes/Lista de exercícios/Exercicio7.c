#include <stdio.h>
#include <string.h>

/*=================*/

#define N_LINHAS 12
#define N_COLUNAS 13

#define PALAVRA_PROCURADA "CANETAAZUL"

/*=================*/

int main()
{
    char matriz[N_LINHAS][N_COLUNAS] =
       {"RHHEEIOYHMBE",
        "RCRYSENTOKWS",
        "IAILITCGWVSR",
        "NNRUAURHEABK",
        "REAZUHETTNAO",
        "ATXAADSFWERS",
        "LADAPNHMSATE",
        "TQETNNSDLSHA",
        "OQWECNLIHHRF",
        "IFRNNAOBELRC",
        "LEYATOTIFCEA",
        "XFACETAAZULA"},

        palavra_procurada [N_COLUNAS] = PALAVRA_PROCURADA;

    int i, j, k, foi_encontrado = 0,
        tamanho_palavra = strlen(palavra_procurada);


    for(i = 0; i < N_LINHAS && !foi_encontrado; i++)
        for(j = 0; j < N_COLUNAS && !foi_encontrado; j++)
        {


            /*Verifica da esquerda pra direita*/
            k=0;
            while(j+k < N_COLUNAS-1 && matriz[i][j+k] == palavra_procurada[k])
                k++;

            if(k == tamanho_palavra)
                foi_encontrado = 1;

            /*Verifica da direita pra esquerda*/
            k=0;
            while(j-k >= 0 && matriz[i][j-k] == palavra_procurada[k])
                k++;

            if(k == tamanho_palavra)
                foi_encontrado = 1;

            /*Verifica de cima pra baixo*/
            k=0;
            while(i+k < N_LINHAS && matriz[i+k][j] == palavra_procurada[k])
                k++;

            if(k == tamanho_palavra)
                foi_encontrado = 1;

            /*Verifica de baixo pra cima*/
            k=0;
            while(i-k >= 0 && matriz[i-k][j] == palavra_procurada[k])
                k++;

            if(k == tamanho_palavra)
                foi_encontrado = 1;
        }

    i--; j--;

    if(foi_encontrado)
        printf("%d %d", i, j);
    else
        printf("erro");


    return 0;
}
