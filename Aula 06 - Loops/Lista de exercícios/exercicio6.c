#include <stdio.h>

#define N_TERMOS 100000 //Numero de termos para cálculo de pi

int main()
{

    /*Variaveis declaradas*/

    int i,
        sinal = 1;
    double pi = 0.0;

    /*Calcula um valor próximo de pi*/
    for(i=0; i < N_TERMOS; i++)
    {
            pi += sinal * 1.0 / (i*2+1);
            sinal = -sinal;
    }
    pi *= 4;

    /*Retorna algo próximo de pi*/
    printf("\n%f", pi);

    return 0;
}
