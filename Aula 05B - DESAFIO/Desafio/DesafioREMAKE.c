#include <stdio.h>

int main()
{
    /*Entrada de dados*/

    float rendimento, imposto,
        taxaA = 1200.25,
        taxaB = 2300.50,
        taxaC = 3500.75,
        taxaD = 4000.00;

    scanf("%f", &rendimento);

    /*Calcula o imposto de renda*/

    if(rendimento <= taxaA)
        imposto = 0;

    else if(rendimento <= taxaB)
        imposto = (rendimento - taxaA) * 0.075;

    else if (rendimento <= taxaC)
        imposto = (taxaB - taxaA) * 0.075
                 +(rendimento - taxaB) * 0.15;

    else if (rendimento <= taxaD)
        imposto = (taxaB - taxaA) * 0.075
                 +(taxaC - taxaB) * 0.15
                 +(rendimento - taxaC) * 0.225;

    else
        imposto = (taxaB - taxaA) * 0.075
                 +(taxaC - taxaB) * 0.15
                 +(taxaD - taxaC) * 0.225
                 +(rendimento - taxaD) * 0.275;

    /*Saída de dados*/
    printf("%.2f",imposto);

    return 0;
}

