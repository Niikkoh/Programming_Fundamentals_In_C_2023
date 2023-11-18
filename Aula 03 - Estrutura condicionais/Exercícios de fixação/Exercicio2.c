#include <stdio.h>
#include <math.h>

int main ()
{
    float numeroR;

    printf("\tCalculadora de raiz\n\n");

    printf("Insira um numero real: ");
    scanf("%f",&numeroR);

    if(numeroR >= 0)
        printf("\n\nA raiz de %.1f eh: %.1f",numeroR, sqrt(numeroR));
    else
        printf("\n\nNao foi possivel calcular a raiz");

    return 0;
}
