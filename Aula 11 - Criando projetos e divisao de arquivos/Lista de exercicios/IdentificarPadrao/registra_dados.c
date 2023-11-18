#include <stdio.h>

#include "registra_dados.h"

/*===================================*/

#define PICO 1
#define VALE 2
#define SUBIDA 3
#define DESCIDA 4

/*===================================*/

int leProximoDado()
{
    int n;
    scanf("%d", &n);
    return n;
}

int calculaPadrao(int primeiroValor, int segundoValor, int terceiroValor)
{
    if(segundoValor > primeiroValor)
    {
        if(segundoValor > terceiroValor)
            return PICO;
        else if(segundoValor < terceiroValor)
            return SUBIDA;
    }
    else if(segundoValor < primeiroValor)
    {
        if(segundoValor < terceiroValor)
            return VALE;
        else if(segundoValor > terceiroValor)
            return DESCIDA;
    }
    return 0;
}

void registraPadrao(int posicao, int tipo)
{
    if(tipo == PICO)
        printf("\nUm pico na posicao %d\n", posicao);
    else if(tipo == VALE)
        printf("\nUm vale na posicao %d\n", posicao);
    else if(tipo == SUBIDA)
        printf("\nUma subida na posicao %d\n", posicao);
    else if(tipo == DESCIDA)
        printf("\nUma descida na posicao %d\n", posicao);
}
