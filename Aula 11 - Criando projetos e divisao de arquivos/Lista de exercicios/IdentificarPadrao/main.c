#include "registra_dados.h"

/*======================================*/

int main()
{

    int valorA, valorB, valorC, contador = 1;

    valorC = leProximoDado();
    while(valorC != -1)
    {
        if(contador >= 3)
            registraPadrao(contador-1, calculaPadrao(valorA, valorB, valorC));

        contador++;

        valorA = valorB;
        valorB = valorC;
        valorC = leProximoDado();
    }

    return 0;
}
