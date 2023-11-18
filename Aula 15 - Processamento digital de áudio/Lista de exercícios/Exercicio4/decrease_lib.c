#include "decrease_lib.h"

/*===================================*/

int tamMaiorSeqNDec (int* val, int n, int* inicio, int* fim)
{
    int i, contador = 1, sequenciaMax = 1;

    for(i = 0; i < n-1; i++)
    {
        if(val[i] <= val[i+1])
            contador++;
        else
        {
            if(sequenciaMax <= contador)
            {
                sequenciaMax = contador;
                *fim = i;
                *inicio = i - contador + 1;
            }
            contador = 1;
        }
    }

    return sequenciaMax;
}
