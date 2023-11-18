#include <stdio.h>

int main()
{

    /*Entrada de dados*/

    float x,y;

    printf("\tInforme as coordenadas do ponto:\n\n");

    printf("Abscissa: ");
    scanf("%f",&x);

    printf("Coordenada: ");
    scanf("%f",&y);

    /*Calcula e informa em qual quadrante se encontra
      o ponto no plano cartesiano*/

    if(x > 0)
    {
        if(y > 0)
            printf("\nQ1");
        else if(y < 0)
            printf("\nQ4");
        else
            printf("\nEixo X");
    }
    else if(x < 0)
    {
        if(y > 0)
            printf("\nQ2");
        else if(y < 0)
            printf("\nQ3");
        else
            printf("\nEixo X");
    }
    else
    {
        if(y != 0)
            printf("\nEixo Y");
        else
            printf("\nOrigem");
    }

    return 0;
}
