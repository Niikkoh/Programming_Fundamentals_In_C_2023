#include <stdio.h>

int main ()
{
    int inteiro,valorAbsoluto;

    printf("\tCalcula valor absoluto\n\n");

    printf("Insira um numero inteiro: ");
    scanf("%d",&inteiro);

    valorAbsoluto = inteiro;

    if(inteiro < 0)
        valorAbsoluto = inteiro * (-1);

    printf("\nO numero absoluto de %d eh %d.", inteiro, valorAbsoluto);

    return 0;
}
