#include <stdio.h>

int main()
{
    /*Entrada de dados*/
    int distanciaD, ponto;

    scanf("%d", &distanciaD);

    /*Retorna a pontuação em função da distância*/

    if(distanciaD <= 800)
        ponto = 1;
    else if(distanciaD <= 1400)
        ponto = 2;
    else if(distanciaD <= 2000)
        ponto = 3;
    else
        ponto = 0;

    /*Saida de dados*/

    printf("%d", ponto);

    return 0;
}
