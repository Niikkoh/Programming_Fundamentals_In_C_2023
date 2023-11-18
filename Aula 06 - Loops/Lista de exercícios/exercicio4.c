#include <stdio.h>

int main()
{

    /*Entrada de variaveis*/
    int valorN, i,
        soma = 0;

    scanf("%d",&valorN);

    /*Verifica todos os poss�veis divisores de um numero inteiro,
      exceto ele mesmo, e inclui em uma soma*/

    for(i=1; i < valorN; i++)
    {
        if(valorN % i == 0)
            soma += i;
    }

    /*Verifica se a soma dos divisores de um inteiro � igual a ele mesmo,
      caso positivo retorna que � um numero perfeito, ou n�o*/

    if(soma == valorN)
        printf("%d eh um numero perfeito, pois a soma de seus divisores eh %d", valorN, soma);
    else
        printf("%d NAO eh um numero perfeito, pois a soma de seus divisores eh %d", valorN, soma);

    return 0;
}
