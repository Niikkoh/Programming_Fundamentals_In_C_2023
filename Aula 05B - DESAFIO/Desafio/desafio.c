#include <stdio.h>

int main()
{
    /*Entrada de dados*/

    float rendimento, imposto;

    scanf("%f", &rendimento);

    /*Calcula o imposto de renda*/

    if(rendimento <= 1200.25) //Isentos no imposto de renda
        imposto = 0;
    else if(rendimento <= 2300.50) // Imposto cobrado para quem recebe entre 1.200.26 até 2.300,50
        imposto = (rendimento - 1200.25) * 7.5 / 100;
    else
    {
        imposto = (2300.50 - 1200.25) * 7.5 / 100; // Acumula a taxa de imposto

        if(rendimento <= 3500.75) // Imposto cobrado para quem recebe entre 2.300,50 e 3.500,75
            imposto = imposto + ((rendimento - 2300.50) * 15 / 100);
        else
        {
            imposto = imposto + ((3500.75 - 2300.50) * 15 / 100); // Acumula a taxa de imposto

            if(rendimento <= 4000.00) // Imposto cobrado para quem recebe entre 3.500,75 e 4000.00
                imposto = imposto + ((rendimento - 3500.75) * 22.5 / 100);

            /*Imposto cobrado para quem recebe mais que 4000.00*/
            else
                imposto = imposto + ((4000.00 - 3500.75) * 22.5 / 100) // Acumula a taxa de imposto
                                  + ((rendimento - 4000.00) * 27.5 / 100); // Porcentagem da taxa do restante do rendimento
        }

    }

    /*Saída de dados*/
    printf("%.2f",imposto);

    return 0;
}
