#include <stdio.h>

int main ()
{
    /*Declaração e entrada de dados*/

    int inteiro, centena, dezena, unidade;

    printf("Insira um numero entre 100 e 999: ");
    scanf("%d",&inteiro);

    /*Separa a centena, dezena e unidade do inteiro*/

    unidade = inteiro % 10;
    dezena = (inteiro % 100) / 10;
    centena = inteiro/100;

    /*Retorna o UDC do número caso o inteiro esteja entre 100 e 999
    caso contrário o programa retorna como um valor inserido incorreto*/

    if(inteiro >= 100 && inteiro <= 999)
        printf("\n O seu UDC eh %d", unidade*100 + dezena*10 + centena);
    else
        printf("\nValor inserido eh invalido");

    return 0;
}
