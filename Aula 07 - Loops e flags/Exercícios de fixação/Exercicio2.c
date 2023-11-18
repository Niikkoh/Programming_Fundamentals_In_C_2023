#include <stdio.h>

#define CRESCIMENTO_BARANO 0.03 //Altura que o barano cresce por ano, em metros
#define CRESCIMENTO_FOOLANO 0.02 //Altura que o foolano cresce por ano, em metros

int main()
{
    float alturaBarano = 1.10, alturaFoolano = 1.50;

    int anosPassados = 0;

    while(alturaBarano <= alturaFoolano)
    {
        alturaBarano += CRESCIMENTO_BARANO;
        alturaFoolano += CRESCIMENTO_FOOLANO;
        anosPassados++;
    }

    printf("Anos passados: %d", anosPassados);
    printf("\nAltura de Barano: %.2f", alturaBarano);
    printf("\nAltura de Foolano: %.2f", alturaFoolano);

    return 0;
}
