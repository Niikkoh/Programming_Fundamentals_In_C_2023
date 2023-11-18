#include "hiper_vektor.h"

int naoRepeteValor (int *vetorOriginal, int *vetorAtualizado, int tamanho)
{
    int i, j, temValorIgual, contador = 0;

    for(i = 0; i < tamanho; i++)
    {
        temValorIgual = 0;
        for(j = 0; j < i; j++)
            if(vetorOriginal[i] == vetorOriginal[j])
            {
                temValorIgual = 1;
                break;
            }
        if(!temValorIgual)
        {
            vetorAtualizado[contador] = vetorOriginal[i];
            contador++;
        }
    }

    return contador;
}
