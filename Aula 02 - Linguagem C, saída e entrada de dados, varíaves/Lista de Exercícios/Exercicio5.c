#include <stdio.h>

int main()
{
    float real1,real2,real3,real4,real5;
    float media;

    printf("Calculadora de média de números reais:\n\n");
    printf("Insira os números reais:\n");

    scanf("%f %f %f %f %f",&real1,&real2,&real3,&real4,&real5);

    media = (real1 + real2) / 2;
    printf("\n%.2f",media);

    media = (real1 + real2 + real3) / 3;
    printf("\n%.2f",media);

    media = (real1 + real2 + real3 + real4) / 4;
    printf("\n%.2f",media);

    media = (real1 + real2 + real3 + real4 + real5) / 5;
    printf("\n%.2f",media);

    return 0;
}
