#include <stdio.h>
#include <math.h>

int main()
{

    float volumeEsfera;
    float raio;

    printf("  Volume de uma esfera:\n\n Informe seu raio: ");
    scanf("%f",&raio);

    volumeEsfera = (4 * M_PI * (raio * raio * raio ))/3;

    printf("\n O volume da esfera de raio %f é: %f",raio,volumeEsfera);

    return 0;
}
