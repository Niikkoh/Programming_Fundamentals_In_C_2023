#include <stdio.h>

int main ()
{

    /*Entrada de dados*/

    float precoGasolina, precoAlcool,
          kmPorLitroGasolina, kmPorLitroAlcool;

    printf("\tCalcula menor custo:\n\n");

    printf("Preco da gasolina: ");
    scanf("%f",&precoGasolina);

    printf("Km percorrido por litro de gasolina: ");
    scanf("%f",&kmPorLitroGasolina);

    printf("\nPreco do alcool: ");
    scanf("%f",&precoAlcool);

    printf("Km percorrido por litro do alcool: ");
    scanf("%f",&kmPorLitroAlcool);

    /*Calcula se a gasolina ou o alcool é mais rentável*/

    if(kmPorLitroGasolina / precoGasolina >= kmPorLitroAlcool / precoAlcool)
        printf("\n\nGasolina eh mais rentavel");

    else
        printf("\n\nAlcool eh mais rentavel");

    return 0;
}
