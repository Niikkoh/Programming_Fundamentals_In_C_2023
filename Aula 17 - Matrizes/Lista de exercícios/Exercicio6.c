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
        "RNRYSENTOKWS",
        "IAIMITCGWVSR",
        "NHRNAURHEABK",
        "RTARUHETTNAO",
        "AACANETAAZUL",
        "LMDCPNHMSATE",
        "TSEGNNSDLSHA",
        "OTWYCNLIHHRF",
        "IDRENAOBELRC",
        "LTYETOTIFCEA",
        "OFKAARATWANP"},

        palavra_procurada [N_COLUNAS] = PALAVRA_PROCURADA;

    int i, j, k, foi_encontrado = 0,
        tamanho_palavra = strlen(palavra_procurada);


    for(i = 0; i < N_LINHAS && !foi_encontrado; i++)
        for(j = 0; j < N_COLUNAS && !foi_encontrado; j++)
        {
            k=0;
            while(j+k < N_COLUNAS-1 && matriz[i][j+k] == palavra_procurada[k])
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
