#include <stdio.h>

#define MAX_INDICE 1000000 //Define o valor maximo do indice
#define MIN_INDICE 1 //Define o valor minimo do indice

int main()
{

    double soma = 0.0;

    int i, sinal;

    sinal = 1;

    for(i= MIN_INDICE; i <= MAX_INDICE; i++)
    {
        soma += sinal * 1.0 / i;
        sinal = -sinal;
    }

    printf("%.20f",soma);


    soma = 0.0;
    sinal = -1;

     for(i= MAX_INDICE; i >= MIN_INDICE; i--)
    {
        soma += sinal * 1.0 / i;
        sinal = -sinal;
    }

    printf("\n%.20f",soma);

    return 0;
}
