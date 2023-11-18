#include <stdio.h>

int main ()
{

    int velMaxima,velMotorista,
        multa= 0;

    printf("\tCalcula multa:\n\n");

    printf("Velocidade maxima permitida: ");
    scanf("%d", &velMaxima);

    printf("Velocidade que o motorista estava dirigindo: ");
    scanf("%d", &velMotorista);

    multa = (velMotorista - velMaxima) * 50;

    if(multa > 0)
        printf("\n\nA multa sera de R$%d",multa);
    else
        printf("\n\nNao ha multa para pagar");

    return 0;
}
